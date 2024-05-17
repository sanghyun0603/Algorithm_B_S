#include <iostream>
#include <algorithm>

using namespace std;

int step[301] = {};
int dp[301] = {};

int main()
{
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> step[i];
    }
    // 문제를 풀다보니 규칙성을 찾음 전과 두칸하는거비교
    dp[1] = step[1];
    dp[2] = step[2] + dp[1];
    dp[3] = max(step[1] + step[3], step[2] + step[3]);
    for (int i = 4; i <= N; i++)
    {
        dp[i] = max(dp[i - 3] + step[i - 1] + step[i], dp[i - 2] + step[i]);
    }
    cout << dp[N] << '\n';

    return 0;
}