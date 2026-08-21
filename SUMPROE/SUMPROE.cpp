// SUMPROE.cpp : This file contains the 'main' function. Program execution begins and ends there.//
#include <iostream>
using namespace std;
int T, n;


long long tong(int a) {

	long long k = 0;

	for (int j = 1; j <= a; j++) {

		k = k + (a / j) * j;

	}

	return k % 1000007;
}

int main()

{

	cin >> T;

	for (int i = 1; i <= T; i++) {

		cin >> n;

		cout << tong(n) % 1000007 << endl;

	}

	//cout << tong(4);

	//cout << "Hello World";

	return 0;

}