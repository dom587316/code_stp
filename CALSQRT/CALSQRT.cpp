// CALSQRT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int solve(int n) {
    int k = 0;
    for (int j = 1; j < n; j++) {
        if (j * j <= n) k = j;
        else break;
    }
    return k;
}

int main()
{
    int T, n, i = 0;
    cin >> T;
    while (T--) {
        cin >> n;
        i++;
        cout << "#" << i << " " << solve(n) << endl;
    }
}
