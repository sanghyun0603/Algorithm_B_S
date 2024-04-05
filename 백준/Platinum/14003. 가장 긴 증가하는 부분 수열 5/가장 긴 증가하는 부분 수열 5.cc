#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int arr[1000001] = {};
    int memo[1000001] = {};
    vector<int> lis;
    vector<int> res;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        memo[i] = 1;
        cin >> arr[i];
        if (lis.empty() || lis.back() < arr[i])
        {
            lis.push_back(arr[i]);
            memo[i] = lis.size();
        }
        else
        {
            auto id = lower_bound(lis.begin(), lis.end(), arr[i]) - lis.begin();
            lis[id] = arr[i];
            memo[i] = id + 1;
        }
    }
    cout << lis.size() << '\n';
    int cnt = lis.size();
    for (int i = N - 1; i >= 0; i--)
    {
        if (cnt == 0)
            break;
        if (memo[i] == cnt)
        {
            res.push_back(arr[i]);
            cnt--;
        }
    }
    for (int i = res.size() - 1; i >= 0; i--)
    {
        cout << res[i] << ' ';
    }

    return 0;
}