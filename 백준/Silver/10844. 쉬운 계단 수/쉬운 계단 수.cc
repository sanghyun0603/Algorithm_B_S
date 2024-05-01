#include <iostream>

using namespace std;

long long dp[101][10] = {};

int main()
{
    int N;
    long long cnt = 0;
    cin >> N;
    for (int i = 1; i < 10; i++)
    {
        dp[1][i] = 1;
    }
    // 처음 한자리수 채우기
    for (int i = 2; i <= N; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j > 0)
            {
                dp[i][j] += dp[i - 1][j - 1];
            }
            if (j < 9)
            {
                dp[i][j] += dp[i - 1][j + 1];
            }
            dp[i][j] %= 1000000000;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cnt += dp[N][i];
    }
    cnt %= 1000000000;
    cout << cnt << '\n';

    return 0;
}