#include <iostream>

using namespace std;

int arr[100001] = {};

int main()
{
    int N, M;
    int cnt = 0;
    int st = 0;
    int end = 0;
    int sums = 0;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    while (st <= end && end < N)
    {
        sums = 0;
        for (int i = st; i <= end; i++)
        {
            sums += arr[i];
        }
        if (sums == M)
        {
            cnt++;
            if (st == end)
            {
                st++;
                end++;
            }
            else
            {
                st++;
            }
        }
        else if (sums > M)
        {
            if (st == end)
            {
                st++;
                end++;
            }
            else
            {
                st++;
            }
        }
        else
        {
            end++;
        }
    }
    cout << cnt << '\n';
    return 0;
}