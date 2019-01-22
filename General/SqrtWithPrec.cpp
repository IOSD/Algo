//calculate sqrt using bitmasking 

#include <iostream>
#include <cmath>

//this is our own created header file
#include "myHeader.cpp"

using namespace std;
const double epsilon = 1e-8;	//equal to 100000000

double compUsingBS(double be, double en, double inc, double n) {
	double mid;
	while (be < en) {
		mid = (be + en) / 2.0;
		if (abs(mid * mid - n) < epsilon) return mid;
		else if (mid * mid < n) {
			be = mid + inc;
		}
		else {
			en = mid - inc;
		}
	}
	return mid - inc;
}


double mysqrt(int n, int precision) {
	double be = 0;
	double en = n;
	double inc = 1;
	double root = 0;

	for (int p = 0; p <= precision; ++p) {
		root = compUsingBS(be, en, inc, n);
		be = root;4 
		en = root + inc;
		inc = inc / 10.0;
	}
	return root;
}


int main() {
	int n, p;
	cin >> n >> p;

	double root = mysqrt(n, p);
	cout << root;
	
	return 0;

}