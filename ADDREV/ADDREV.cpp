// Library
#include <iostream>
using namespace std;

// Tien xu ly
#define N 100

// Bien toan cuc
int map[N][N];
int n, k, Ans;

// Ham dao nguoc so
int reverse_number(int a) {
	int r = 0;
	while (a != 0) {
		r = r * 10;
		r += a % 10;
		a = a / 10;
	}
	return r;
}

// Ham main & doc input tu file
int main(int argc, char** argv) {
	int test_case, T;
	//cout << reverse_number(34534) << endl;
	//freopen("input.txt". "r", stdin);
	
	cin >> T;

	//// doc du lieu, xu ly du lieu, in ket qua
	for (test_case = 1; test_case <= T; ++test_case)
	{
	//	// doc data tu sample_input.txt or ban phim
		cin >> n;
		cin >> k;
	//	///////////////////
	//	// thuat toan
		n = reverse_number(n);
		k = reverse_number(k);
		cout << reverse_number(n + k) << endl;
	//	///////////////////
	//	
	}
	return 0; // ket thuc chuong trinh
}