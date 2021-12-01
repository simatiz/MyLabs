#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <algorithm>
using namespace std;

static void BubbleSort(double** a, int n) {
	bool flag = true;
	double el;
	while (flag) {
		for (int i = 0; i < n-1; i++) {
			flag = false;
			if (a[i][i] > a[i+1][i+1]) {
				el = a[i][i];
				a[i][i] = a[i+1][i+1];
				a[i+1][i+1] = el;
				flag = true;
			}
		}
	}
}

static void Swap(double** a, double** b, int n) {
	double el;
	for (int i = 0; i < n; i++) {
		el = a[i][i];
		a[i][i] = b[i][i];
		b[i][i] = el;
	}
}

int main() {
	int n;
	cin >> n;

	double** a = new double* [n];
	for (int i = 0; i < n; i++) a[i] = new double[n];
	double** b = new double* [n];
	for (int i = 0; i < n; i++) b[i] = new double[n];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> b[i][j];
		}
	}
	cout << endl;
	
	BubbleSort(a, n);
	BubbleSort(b, n);

	Swap(a, b, n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << b[i][j] << " ";
		}
		cout << endl;
	}

	delete[] a;
	delete[] b;
	return 0;
}