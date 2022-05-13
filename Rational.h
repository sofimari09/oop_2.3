#pragma once
#include <string>

using namespace std;

class Rational
{
private:
	int a, b;
public:
	int getA()const { return a; };
	int getB()const { return b; };
	void setA(int value);
	void setB(int value);


	Rational();
	Rational(int a, int b);
	Rational(const Rational&);

	operator string() const;
	Rational& operator ++();
	Rational& operator --();
	Rational operator ++(int);
	Rational operator --(int);

	friend ostream& operator <<(ostream&, const Rational&);
	friend istream& operator >>(istream&, Rational&);


	double value();
	Rational div(Rational&, Rational&);
	friend bool operator == (Rational&, Rational&);
	friend bool operator >(Rational&, Rational&);
	friend bool operator <(Rational&, Rational&);


};

