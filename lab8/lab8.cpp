#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <algorithm>

using namespace std;
int main() {
	int n;
	cin >> n;
	int** a = new int* [n];
	for (int i = 0; i < n; i++) a[i] = new int[n];
	int** b = new int* [n];
	for (int i = 0; i < n; i++) b[i] = new int[n];
	int* ad = new int[n];
	int* bd = new int[n];
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
	for (int i = 0; i < n; i++) {
		ad[i] = a[i][i]; 
		bd[i] = b[i][i];
	}
	sort(ad, ad + n);
	sort(bd, bd + n);
	for (int i = 0; i < n; i++) {
		a[i][i] = bd[i];
		b[i][i] = ad[i];
	}
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
	delete[] ad;
	delete[] bd;
	return 0;
}