#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, M;
    int arr[100001] = {};
    int sums[100001] = {};
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
        sums[i] = arr[i] + sums[i - 1];
    }
    for (int k = 0; k < M; k++)
    {
        int i, j;
        cin >> i >> j;
        cout << sums[j] - sums[i - 1] << '\n';
    }

    return 0;
}