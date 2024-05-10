#include <iostream>

using namespace std;

int main()
{
    int N;
    int cnt = 0;
    cin >> N;
    for (int i = 1; i * i <= N; i++)
    {
        cnt++;
    }
    cout << cnt << '\n';

    return 0;
}

// N = 6
// 111111
// 101010
// 100011
// 100111
// 100101
// 100100