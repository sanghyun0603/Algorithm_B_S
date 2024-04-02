#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int st = 1;
    int end = K;
    int ans;
    while (st <= end)
    {
        int mid = (st + end) / 2;
        int cnt = 0;
        for (int i = 1; i <= N; i++)
        {
            cnt += min(N, mid / i);
        }

        if (cnt >= K)
        {
            end = mid - 1;
            ans = mid;
        }
        else
        {
            st = mid + 1;
                }
    }
    cout << ans << '\n';

    return 0;
}