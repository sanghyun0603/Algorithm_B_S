#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dp[101][100001] = {};

int main()
{
    int n, k;
    vector<pair<int, int>> v;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int w, value;
        cin >> w >> value;
        v.push_back(make_pair(w, value));
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (j >= v[i - 1].first)
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - v[i - 1].first] + v[i - 1].second);
            }
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    cout << dp[n][k] << '\n';

    return 0;
}