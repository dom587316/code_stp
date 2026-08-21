// NUMPER.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int T, i;

int sqrt(int n) {
    int k = 0;
    for (int j = 1; j <= n; j++) {
        if (j * j <= n) k = j;
        else break;
    }
    return k;
}

void solve(int a, int b) {
    int cnt = 0;
    int arr[10000];
    int left = sqrt(a);
    int right = sqrt(b);
    for (int j = left; j <= right; j++) {
        if (j * j <= b && j * j >= a) {
            cnt++;
            arr[cnt] = j*j;
        } 
    }
    i++;
    cout << "#" << i << " ";
    if (cnt) {
        
        for (int j = 1; j <= cnt; j++) cout << arr[j] << " ";
        cout << endl;
    }
    else
        cout << "NO NUMBER" << endl;
}

int main()
{
    int a, b;
    cin >> T;
    while (T--) {
        cin >> a >> b;
        solve(a, b);
    }
    return 0;
}