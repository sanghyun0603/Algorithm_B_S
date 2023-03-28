//
// Created by 배상현 on 2023/03/28.
//
#include<iostream>
using namespace std;

int main () {
    int arr[10][10] = {};
    int maxs = -1;
    int maxi, maxj;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (maxs < arr[i][j]) {
                maxs = arr[i][j];
                maxi = i;
                maxj = j;
            }
        }
    }
    cout << maxs << '\n' << maxi+1 << ' ' << maxj+1 << '\n';

}