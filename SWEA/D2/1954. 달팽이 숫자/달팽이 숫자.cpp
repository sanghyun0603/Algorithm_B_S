#include<iostream>

using namespace std;

int di[4] = {0, 1, 0, -1};
int dj[4] = {1, 0, -1, 0};

void move(int arr[][11], int n, int dir) {
    int i = 0;
    int j = 0;
    arr[i][j] = 1;
    int start = 2;
    while (true) {
        int ni = i + di[dir];
        int nj = j + dj[dir];
        if (ni > n - 1 || ni < 0 || nj > n - 1 || nj < 0 || arr[ni][nj] != 0) {
            dir = (dir + 1) % 4;
        } else {
            arr[ni][nj] = start;
            start++;
            i = ni;
            j = nj;
        }
        if (start == (n * n) + 1) {
            break;
        }
    }
}

int main() {
    int t;
    //달팽이 방향설정
    cin >> t;
    for (int test = 0; test < t; test++) {
        int n;
        int dir = 0;
        int arr[11][11] = {};
        cin >> n;
        move(arr, n, dir);
        cout << '#' << test + 1 << '\n';
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << arr[i][j] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}