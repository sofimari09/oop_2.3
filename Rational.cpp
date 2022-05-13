#include "Rational.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <sstream>

using namespace std;


void Rational::setA(int value)
{
	a = value;
}
void Rational::setB(int value)
{
	b = value;
}

Rational::Rational()
	: a(2), b(3)
{}
Rational::Rational( int a,  int b)
{
	setA(a); setB(b); 
}
Rational::Rational(const Rational& t)
{
	*this = t;
}
Rational::operator string() const
{
	stringstream sout;
	sout << a << "/" << b << endl;
	return sout.str();
}

Rational& Rational::operator ++()
{
		++a;
	return *this;
}
Rational& Rational::operator --()
{
			--a;
	return *this;
}

Rational Rational::operator ++(int)
{
	Rational tmp = *this;
		++b;
	return tmp;
}
Rational Rational::operator --(int)
{
	Rational tmp = *this;
		--b;
	return tmp;
}

ostream& operator <<(ostream& out, const Rational& a)
{
	out << string(a) << endl;
	return out;
}
istream& operator >>(istream& in, Rational& a)
{
	cout << "A ";
	in >> a.a;
	cout << "B ";
	in >> a.b;
	
	return in;
}

double Rational::value()
{
	return 1. * a / b;
}

Rational Rational::div(Rational& l, Rational& r)
{
	Rational tmp; 
	tmp.a = l.a * r.b;
	tmp.b = r.a * l.b;
	return tmp;
}

bool operator == (Rational& l, Rational& r)
{

	return l.a == r.a && l.b == r.b;
		
}



bool operator > (Rational& l, Rational& r)
{

	return (l.a * r.b) > (l.b * r.a);

}
bool operator < (Rational& l, Rational& r)
{

	return (l.a * r.b) < (l.b * r.a);

}
