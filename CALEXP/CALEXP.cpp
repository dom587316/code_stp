// CALEXP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

long long solve(int n, int k) {
    int r = 1;
    while (k--) {
        r = r * n;
    }
    return r;
}

int main()
{
    int T, n, k;
    int i=0;
    cin >> T;
    while (T--) {
        cin >> n >> k;
        i++;
        cout << "#" << i << " " << solve(n, k) << endl;
    }
}
