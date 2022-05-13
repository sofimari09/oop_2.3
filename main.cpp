#include "Rational.h"
#include <iostream>

using namespace std;

int main() 
{
	Rational r1, r2(3, 5), r3;
	
	cin >> r1;
	cin >> r3;
	cout << "r1: " << r1 << endl;
	cout << "r3: " << r3 << endl << endl;

	cout << "r2: " << r2 << endl;
	cout << ++r2 << endl;
	cout << --r2 << endl;
	cout << r2++ << endl;
	cout << r2-- << endl;


	Rational d = d.div(r1, r3);
	cout << "Div= " << d.div(r1, r3) << endl;
	
    
	cout << operator == (r1, r2) << endl;
	cout << operator > (r1, r2) << endl;
	cout << operator < (r1, r2) << endl;


	cin.get();
	return 0;
}