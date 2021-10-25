#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;
int main() {
	int n, k=1, a;
	cin >> n;
	a = n;
	while (n / 10 != 0) {
		n = n / 10;
		k++;
	}
	for (int i = 1; i < k; i++) {
		n += a % 10;
		a = a / 10;
	}
	cout << n;
	return 0;
}