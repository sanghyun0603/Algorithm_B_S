#include <iostream>

using namespace std;
int arr[2200][2200] = {};
int minusone = 0;
int plusone = 0;
int zero = 0;
void paper(int r, int c, int n)
{ // base condition
    if (n == 1)
    {
        switch (arr[r][c])
        {
        case 1:
            plusone++;
            break;
        case -1:
            minusone++;
            break;
        case 0:
            zero++;
            break;
        }
        return;
    }
    //  먼저 같은숫자인지 확인
    int first_num = arr[r][c];
    int flag = 0;
    for (int i = r; i < n + r; i++)
    {
        for (int j = c; j < n + c; j++)
        {
            if (first_num != arr[i][j])
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag) // 다를경우
    {
        int cut_n = n / 3;
        // 3분할
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                paper(cut_n * i + r, cut_n * j + c, cut_n);
            }
        }
    }
    else
    {
        switch (first_num)
        {
        case 1:
            plusone++;
            break;
        case -1:
            minusone++;
            break;
        case 0:
            zero++;
            break;
        }
        return;
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
    paper(0, 0, n);
    cout << minusone << '\n'
         << zero << '\n'
         << plusone << '\n';
    return 0;
}