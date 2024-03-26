#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int K, N;
    int arr[10001];
    cin >> K >> N;
    for (int i = 0; i < K; i++)
    {
        cin >> arr[i];
    }
    long long st = 1;
    long long end = 0x7fffffff;
    while (st < end)
    {
        long long mid = (st + end + 1) / 2;
        long long cnt = 0;
        for (int i = 0; i < K; i++)
        {
            cnt += arr[i] / mid;
            // 각 선마다 몇개잘라지는지
        }
        if (cnt >= N)
            st = mid;
        else
            end = mid - 1;
    }
    cout << st << '\n';
}