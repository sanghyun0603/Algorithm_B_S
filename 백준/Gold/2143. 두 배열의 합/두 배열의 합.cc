#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int T, n, m;
    int arr1[1001] = {};
    vector<int> sums1;
    int arr2[1001] = {};
    vector<int> sums2;
    cin >> T;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < n; i++)
    {
        int sums = arr1[i];
        sums1.push_back(sums);
        for (int j = i + 1; j < n; j++)
        {
            sums += arr1[j];
            sums1.push_back(sums);
        }
    }
    for (int i = 0; i < m; i++)
    {
        int sums = arr2[i];
        sums2.push_back(sums);
        for (int j = i + 1; j < m; j++)
        {
            sums += arr2[j];
            sums2.push_back(sums);
        }
    }
    sort(sums2.begin(), sums2.end());
    long long res = 0;
    // 1000일경우 sums1이 50만정도
    for (int i = 0; i < sums1.size(); i++)
    {
        int bs = T - sums1[i];
        int lower = lower_bound(sums2.begin(), sums2.end(), bs) - sums2.begin();
        int upper = upper_bound(sums2.begin(), sums2.end(), bs) - sums2.begin();
        res += upper - lower;
    }
    cout << res;
}
// 흠........
// T가 주어진다.
// T가 되는 배열들의 갯수를 찾는문제....
// 각각 누적합만들고 T = a합 + b의합이용해 하나만 이분탐색