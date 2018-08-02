/*
Suppose that f is a continuous, real-valued function, A < B, 
f(A) <= 0, and f(B) > 0. A fundamental theorem of analysis states
that there must be a value of x such that f(x) = 0 and A <= x < B.
That is, x is a root (or zero) of f. 

Using the bisection method, find a sequence of approximations to x
by having the interval [A, B) yield smaller intervals [a, b). 
*/

#include <iostream>
#include <cassert> //allows asserting for testing conditions
#include <cmath>
using namespace std; 

double bisect( 
	double f(double),
	double a,
	double b,
	double tol = 1e-6) {

	if(a > b)
		return bisect(f, b, a, tol);

	assert(a < b && f(a) <= 0 && f(b) > 0 && "bisect: precondition violation");

	while(b - a > tol){
		//a < b && f(a) <= 0 && f(b) > 0
		double m = 0.5 * (a + b);
		if(f(m) > 0)
			b = m; //f(b) > 0
		else
			a = m; //f(a) <= 0
	}
	return 0.5 * (a + b);
}

double logm(double x){
	return log(x) - 1;
}

int main(){
	cout << "pi = " << 0.5 * bisect(sin, 4, 8) << endl;
	cout << "e = " << bisect(logm, 0.5, 3) << endl;
	cout << "e = " << bisect(logm, 3, 3) << endl;
}