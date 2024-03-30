#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, M;
    int somes = 0;
    vector<int> budgets;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int budget;
        cin >> budget;
        budgets.push_back(budget);
        somes += budget;
    }
    cin >> M;
    sort(budgets.begin(), budgets.end());
    if (somes <= M)
    {
        cout << budgets.back();
        return 0;
    }
    int st = 1;
    int end = M;
    int res;
    while (st <= end)
    {
        int mid = (st + end) / 2;
        int sums = 0;
        for (int i = 0; i < N; i++)
        {
            if (budgets[i] < mid)
            {
                sums += budgets[i];
            }
            else
            {
                sums += mid;
            }
        }
        if (sums > M)
        {
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
            res = mid;
        }
    }
    cout << res << '\n';
    return 0;
}