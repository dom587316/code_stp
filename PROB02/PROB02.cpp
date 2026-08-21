// PROB02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Bien toan cuc
int T, m, n, kk;

int main()
{
    cin >> T;
    while (T--) {
        kk++;
        cin >> m >> n;
        vector<int> arr(5);
        vector<vector<char>> grid(5*m+1, vector<char>(5*n+1));
        for (int i = 0; i < 5*m+1;i++) {
            string line;
            cin >> line;
            for (int j = 0; j < 5*n+1;j++) {
                grid[i][j] = line[j];   
            }
        }
        
        // solve
        int i = 0, j = 0;
        while (i < m && j < n) {
            //cout << grid[5 * i + 1][5 * j + 1] << endl;
            //cout << grid[5 * i + 2][5 * j + 1] << endl;
            //cout << grid[5 * i + 3][5 * j + 1] << endl;
            //cout << grid[5 * i + 4][5 * j + 1] << endl;

            if (grid[5 * i + 4][5 * j + 1] == '*') {
                arr[4]++; // loai 5
                j++;
                //cout << "loai 5" << endl;
            } else if (grid[5 * i + 3][5 * j + 1] == '*') {
                arr[3]++; // loai 4
                j++;
                //cout << "loai 4" << endl;
            } else if (grid[5 * i + 2][5 * j + 1] == '*') {
                arr[2]++; // loai 3
                j++;
                //cout << "loai 3" << endl;
            } else if (grid[5 * i + 1][5 * j + 1] == '*') {
                arr[1]++; // loai 2
                j++;
                //cout << "loai 2" << endl;
            } else if (grid[5 * i + 1][5 * j + 1] == '.') {
                arr[0]++; // loai 1
                j++;
                //cout << "loai 1" << endl;
            }

            if (j == n) {
                i++;
                j = 0;
            }
        }
        cout << "#" << kk<< " ";
        for (int j = 0; j < 5; j++) cout << arr[j] << " ";
        cout << endl;
    }
}
