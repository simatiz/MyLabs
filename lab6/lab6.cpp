#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;
 int sumofn(int n, int a, int r) {
	for (int i = 1; i <= n; i++) {
		r += a % 10;
		a = a / 10;
	}
	return r;
}

int main() {
	int k, n, a, r=0, max=0, p=0, res=0;
	cin >> k >> n;
	for (int i = 1; i <= k; i++) {
		cin >> a;
		p=sumofn(n, a, r);
		if (p > max) {
			max = p;
			res = a;
		}
	}
	cout << res;
	return 0;
}