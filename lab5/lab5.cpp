#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;
int main() {
	int n;
	cin >> n;
	for (int a = 1; a <= n; a++) {
		for (int b = 1; b <= n; b++) {
			for (int c = 1; c <= n; c++) {
				if (a * a + b * b == c * c) {
					cout << a << " " << b << " " << c << endl;
				}
			}
		}
	}
	return 0;
}