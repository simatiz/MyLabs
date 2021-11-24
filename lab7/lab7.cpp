#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <algorithm>

using namespace std;
int main() {
	int n, k=0, l=-1;
	cin >> n;
	int* b = new int[n];
	int* m = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < n; i++) {
		m[i] = 1;
	}
	sort(b, b + n);
	for (int i = 1; i < n; i++) {
		if (b[i] == b[i - 1]) {
			m[i]=m[i-1]+1;
		}
	}
	for (int i = 0; i < n; i++) {
		if (m[i] > l) {
			l = m[i];
			k = i;
		}
	}
	cout << b[k];
	delete[] b;
	delete[] m;
	return 0;
}