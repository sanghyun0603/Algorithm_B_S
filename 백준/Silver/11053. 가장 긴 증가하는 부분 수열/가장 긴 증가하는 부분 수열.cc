#include <iostream>

using namespace std;

int main()
{
    int arr[1001] = {};
    int dp[1001] = {};
    int N;
    int maxs = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        dp[i] = 1;
        cin >> arr[i];
        // 자기자신
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i])
            {
                dp[i] = max(dp[j] + 1, dp[i]);
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (maxs < dp[i])
        {
            maxs = dp[i];
        }
    }
    cout << maxs << '\n';

    return 0;
}