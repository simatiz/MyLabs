#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;
int main() {
	double x1, y1, x2, y2, x3, y3, a, b, c, res1, res2, res3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	b = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	c = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	res1 = (acos((b * b + c * c - a * a) / (b * c * 2)) * 180) / M_PI;
	res2 = (acos((a * a + c * c - b * b) / (a * c * 2)) * 180) / M_PI;
	res3 = (acos((b * b + a * a - c * c) / (b * a * 2)) * 180) / M_PI;
	cout << a << " " << b << " " << c << " " << res1 << " " << res2 << " " << res3 << endl;
	return 0;
}