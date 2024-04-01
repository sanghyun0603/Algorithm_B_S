#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    sort(nums.begin(), nums.end());
    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        int good = nums[i];
        int st = 0;
        int end = N - 1;
        while (st < end)
        {
            if (nums[st] + nums[end] > good)
            {
                end--;
            }
            else if (nums[st] + nums[end] < good)
            {
                st++;
            }
            else
            {
                if (st == i)
                {
                    st++;
                }
                else if (end == i)
                {
                    end--;
                }
                else
                {
                    cnt++;
                    break;
                }
            }
        }
    }
    cout << cnt << '\n';
    return 0;
}