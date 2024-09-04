#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m, num;
    int cnt = 0;
    map<int, int> nums;
    cin >> n >> m;
    for (int i = 0; i < n + m; i++)
    {
        cin >> num;
        if (nums.find(num) != nums.end())
            nums[num]++;
        else
            nums.insert({num, 1});
    }
    for (const auto &it : nums)
    {
        if (it.second == 1)
        {
            cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}