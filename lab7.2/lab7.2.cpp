#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <algorithm>

using namespace std;
int main() {
	int n, k = 1, m = 0, km=0;
	cin >> n;
	int* b = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	sort(b, b + n);
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (b[i] == b[j]) {
				k++;
			}
		}
		if (k > km) {
			km = k;
			m = b[i];
		}
		k = 1;
	}
	cout << m;
	delete[] b;
	return 0;
}