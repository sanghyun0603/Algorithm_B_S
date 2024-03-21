#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    int arr[101][101] = {};
    long long dp[101][101] = {};
    int jump;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
        }
    }
    dp[0][0] = 1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            jump = arr[i][j];
            if (i == N - 1 && j == N - 1)
            {
                break;
            }
            if (i + jump < N)
            {
                dp[i + jump][j] += dp[i][j];
            }
            if (j + jump < N)
            {
                dp[i][j + jump] += dp[i][j];
            }
        }
    }

    cout << dp[N - 1][N - 1] << '\n';
    return 0;
}