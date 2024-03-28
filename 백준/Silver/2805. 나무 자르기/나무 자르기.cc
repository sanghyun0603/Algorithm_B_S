#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    int N, M;
    vector<int> woods;
    int result = 0;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        int wood;
        cin >> wood;
        woods.push_back(wood);
    }
    sort(woods.begin(), woods.end());
    long long st = 0;
    long long end = woods.back();
    while (st <= end)
    {
        long long mid = (st + end) / 2;
        long long cnt = 0;
        for (int i = 0; i < N; i++)
        {
            if (woods[i] - mid > 0)
            {
                cnt += (woods[i] - mid);
            }
        }
        if (cnt >= M)
        {
            st = mid + 1;
            result = mid;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << result << '\n';
    return 0;
}