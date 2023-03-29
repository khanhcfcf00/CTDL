#include<iostream>
using namespace std;
int tong(int x, int n) {
	if (n==0)
	{
		return 0;
	}
	if (n == 1) {
		return x;
	}
	return (1 + x / n) * tong(x, n - 1) - (x / n) * tong(x, n - 2);
}
int main() {
	int x, n;
	cout << "nhap x";
	cin >> x;
	cout << "nhap n";
	cin >> n;
	cout << tong(x, n);
	return 0;
}
