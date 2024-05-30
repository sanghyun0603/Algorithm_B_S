#include <iostream>

using namespace std;

int arr[301][301] = {};

int main()
{
    int n, m, k, ii, jj, xx, yy;
    int sums = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        sums = 0;
        cin >> ii >> jj >> xx >> yy;
        for (int row = ii; row <= xx; row++)
        {
            for (int col = jj; col <= yy; col++)
            {
                sums += arr[row][col];
            }
        }
        cout << sums << '\n';
    }
    return 0;
}