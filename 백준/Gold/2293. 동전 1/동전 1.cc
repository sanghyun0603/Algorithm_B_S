#include <iostream>

using namespace std;

int arr[101] = {};
int dp[10001] = {};

int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    dp[0] = 1; //안고르는경우
    for (int i = 1; i <= n; i++)
    {
        for (int j = arr[i]; j <= k; j++)
        {
            dp[j] += dp[j - arr[i]];
        }
    }
    cout << dp[k] << '\n';
    return 0;
}