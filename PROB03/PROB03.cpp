// PROB03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int T, h, w, m, n,kk, kq, max_sub;

int main()
{
    cin >> T;
    while (T--) {
        kk++;
        cin >> h >> w >> m >> n;
        vector<vector<int>> grid(m, vector<int>(n));

        // import data
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> grid[i][j];
                if (grid[i][j] % 2 != 0) grid[i][j] = 0;
            }
        }

        //// cout data
        //for (int i = 0; i < m; i++) {
        //    for (int j = 0; j < n; j++) {
        //        cout << grid[i][j];
        //    }
        //}

        // solve
        kq=0;
        max_sub=0;
        int x=0, y=0;
        while (y <= m - h && x <= n - w) {
            kq = 0;
            for (int i = y; i < y + h; i++) {
                for (int j = x; j < x + w; j++) {
                    if (i == y || j == x || i == y + h - 1 || j == x + w - 1) {
                        kq = kq + grid[i][j];
                        //cout << kq << endl;
                    }
                }
            }
            if (max_sub < kq) max_sub = kq;
            x++;
            if (x == n - w+1) {
                y++;
                x = 0;
            }
        }

        // in dap an
        cout << "#" << kk << " " << max_sub << endl;
    }
}
