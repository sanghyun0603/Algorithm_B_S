#include <iostream>

using namespace std;

int findZ(int N, int r, int c)
{
    if (N == 0)
        return 0;
    // 4방면 길이 2^n-1
    int half_sq = 1 << (N - 1);
    // 1사분면
    if (r < half_sq && c < half_sq)
        return findZ(N - 1, r, c);
    // 2사분면
    else if (r < half_sq && c >= half_sq)
        return half_sq * half_sq + findZ(N - 1, r, c - half_sq);
    // 3사분면
    else if (r >= half_sq && c < half_sq)
        return 2 * half_sq * half_sq + findZ(N - 1, r - half_sq, c);
    // 4사분면
    else
        return 3 * half_sq * half_sq + findZ(N - 1, r - half_sq, c - half_sq);
}

int main()
{
    int N, r, c;
    cin >> N >> r >> c;
    // 4방면으로 나눠서 정복
    cout << findZ(N, r, c);
    return 0;
}