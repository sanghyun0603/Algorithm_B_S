#include <iostream>

using namespace std;
int main()
{
    long long X, Y;
    cin >> X >> Y;
    // 승률 이긴게임/총게임
    long long ans = 0;
    long long end = X;
    long long st = 0;
    long long Z = (100 * Y) / X;
    if (Z >= 99)
    {
        cout << -1 << '\n';
        return 0;
    }
    while (st <= end)
    {
        long long mid = (st + end) / 2;
        long long add_game = (100 * (Y + mid)) / (X + mid);
        if (Z < add_game)
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