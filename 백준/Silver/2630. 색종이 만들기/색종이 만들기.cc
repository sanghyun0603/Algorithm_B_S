#include <iostream>

using namespace std;

int arr[130][130] = {};
int w_cnt = 0;
int b_cnt = 0;

void origami(int r, int c, int n)
{
    // 굳이 base condition을 할 필요가 있나.
    // 있고 없을 경우 두가지니 이것만 따지자
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
        int cut_n = n / 2;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                origami(cut_n * i + r, cut_n * j + c, cut_n);
            }
        }
    }
    else
    {
        // 종이가 같다면
        switch (arr[r][c])
        {
        case 1:
            b_cnt++;
            break;
        case 0:
            w_cnt++;
            break;
        }
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
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    origami(0, 0, n);
    cout << w_cnt << '\n'
         << b_cnt << '\n';
    return 0;
}