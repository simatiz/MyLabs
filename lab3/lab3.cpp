#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;
int main() {
	double a, x0, xn1, xn, res;
	cin >> a;
	if (a <= 1) {
		x0 = min(2 * a, 0.95);
	}
	else if (a > 1 && a < 25) {
		x0 = a / 5;
	}
	else {
		x0 = a / 25;
	}
	xn = x0;
	xn1 = 0.8 * xn + a / (5 * pow(xn, 4));
	while ((1.25 * a * abs(xn1 - xn)) >= pow(10, -6)) {
		xn = xn1;
		xn1 = 0.8 * xn1 + a / (5 * pow(xn1, 4));
	}
	res = a - pow(xn, 5);
	cout << xn << " " << res;
	return 0;
}