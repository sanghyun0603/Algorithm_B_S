#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    int N, M;
    int res = 0;
    cin >> N >> M;
    vector<int> lectures(N);
    for (int i = 0; i < N; i++)
    {
        cin >> lectures[i];
    }
    int st = 1;
    int end = accumulate(lectures.begin(), lectures.end(), 0);
    while (st <= end)
    {
        int cnt = 1;
        int sums = 0;
        int mid = (st + end) / 2;
        for (int i = 0; i < N; i++)
        {
            if (lectures[i] > mid)
            {
                cnt = 100001;
                break;
            }
            if (sums + lectures[i] > mid)
            {
                sums = lectures[i];
                cnt++;
            }
            else
            {
                sums += lectures[i];
            }
        }
        if (cnt <= M)
        {
            end = mid - 1;
            res = mid;
        }
        else
        {
            st = mid + 1;
        }
    }
    cout << res << '\n';
    return 0;
}