#include <iostream>
#include <string>

using namespace std;

int arr[65][65] = {};

void Quadtree(int r, int c, int n)
{
    // 압축필요 여부
    int flag = 0;
    for (int i = r; i < r + n; i++)
    {
        for (int j = c; j < c + n; j++)
        {
            if (arr[r][c] != arr[i][j])
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag)
    {
        cout << "(";
        int cut_n = n / 2;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                Quadtree(i * cut_n + r, j * cut_n + c, cut_n);
            }
        }
        cout << ")";
    }
    else
    {
        if (arr[r][c] == 0)
            cout << "0";
        else
            cout << "1";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < s.length(); j++)
        {
            arr[i][j] = s[j] - '0';
        }
    }
    Quadtree(0, 0, n);
    return 0;
}