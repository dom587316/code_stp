// PRIME1E.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool is_prime(int a) {
    if (a <= 1) return false;
    if (a == 2 || a == 3) return true;
    if (a % 2 == 0 || a % 3 == 0) return false;
    for (int e = 2;e * e <= a; e++) {
        if (a % e == 0) return false;
    }
    return true;
}

// bien toan cuc
int T, m, n;

int main()
{
    cin >> T;
    for (int i = 1; i <= T; i++) {
        cin >> m >> n;
        for (int j = m; j <= n; j++) {
            if (is_prime(j))
                cout << j << endl;
        }
        cout << endl;
    }
    //cout << is_prime(5) << endl;
    //cout << is_prime(4) << endl;
    //cout << is_prime(3) << endl;
    //cout << is_prime(2) << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
