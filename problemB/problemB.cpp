#include <iostream>
using namespace std;

int main() {
	// in cac so chan tu 1 den 10
	for (int i = 1; i <= 10; i++) {
		if (i % 2 == 0) {
			cout << i << " ";
		}
	}

	// in cac so le trong khoang tu 1 den 10
	for (int i = 1; i <= 10; i++) {
		if (i % 2 != 0) {
			cout << i << " ";
		}
	}

	// tinh a^b
	int a = 2, b = 5, pow = 1;
	for (int i = 0; i < b; i++) {
		pow = pow * a;
	}
	cout << pow << endl;
}