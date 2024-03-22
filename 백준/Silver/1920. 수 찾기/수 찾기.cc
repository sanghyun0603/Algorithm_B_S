#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, m, num, ans;
    vector<int> A;
    int M[100001] = {};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        A.push_back(num);
    }
    sort(A.begin(), A.end());
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> M[i];
    }
    for (int i = 0; i < m; i++)
    {
        int st = 0;
        int end = n - 1;
        ans = 0;
        while (st <= end)
        {
            int mid = (st + end) / 2;
            if (A[mid] < M[i])
            {
                st = mid + 1;
            }
            else if (A[mid] > M[i])
            {
                end = mid - 1;
            }
            else
            {
                ans = 1;
                break;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}