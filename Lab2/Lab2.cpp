#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;
int main() {
	double d, a, b, c, res;
	cin >> d >> a >> b >> c;
	if (d <= 0 || a == b || a == -b || sin(c) == 0) {
		cout << "Error";
	}
	else {
		res = log(d) / (abs(pow(b,2)-pow(a,2))*sin(c));
		cout << res;
	}
	return 0;
}