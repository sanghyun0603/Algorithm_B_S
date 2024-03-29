#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N, C, res;
    vector<int> homes;
    cin >> N >> C;
    for (int i = 0; i < N; i++)
    {
        int home;
        cin >> home;
        homes.push_back(home);
    }
    sort(homes.begin(), homes.end());
    int st = 1;
    int end = homes.back();
    while (st <= end)
    {
        long long mid = (st + end) / 2;
        int cnt = 1;
        int pr_home = homes[0];
        for (int i = 1; i < N; i++)
        {
            if (homes[i] - pr_home >= mid)
            {
                pr_home = homes[i];
                cnt++;
            }
        }
        if (cnt >= C)
        {
            st = mid + 1;
            res = mid;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << res << '\n';

    return 0;
}
// 흠.... 1 2 4 8 9에 3개의 공유기 설치해서 최댓값
//  뭐를 파라메틱서치할것인가...
// 공유기의 개수는 정해짐
// 최대거리를 파라메틱해보자
// st = 1, end 집마지막위치
// 첫번째위치는 공유기 무조건설치