#include <iostream>

using namespace std;

int main()
{
    int n;
    int arr[100001] = {};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxs = arr[0];
    int dp[100001] = {};
    dp[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (dp[i - 1] + arr[i] > arr[i])
            dp[i] = dp[i - 1] + arr[i];
        else
            dp[i] = arr[i];
        if (dp[i] > maxs)
            maxs = dp[i];
    }

    cout << maxs << '\n';

    return 0;
}