#include <iostream>

using namespace std;

int main()
{
    int N, F;
    int res = 0;
    cin >> N;
    cin >> F;
    N /= 100;
    N *= 100;
    // 뒤자리수 2개 날림
    while ((N + res) % F != 0)
        res++;
    if (res < 10)
    {
        cout << 0 << res << '\n';
    }
    else
    {
        cout << res << '\n';
    }

    return 0;
}