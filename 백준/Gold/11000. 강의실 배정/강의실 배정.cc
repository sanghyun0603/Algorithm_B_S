#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int arr[200001] = {};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    vector<pair<int, int>> v;
    priority_queue<int, vector<int>, greater<int>> pq;
    pair<int, int> min_lecture;
    int st, end;
    int cnt = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> st >> end;
        v.push_back({st, end});
    }
    sort(v.begin(), v.end());
    pq.push(v[0].second);
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i].first >= pq.top())
        {
            pq.pop();
            pq.push(v[i].second);
        }
        else
        {
            pq.push(v[i].second);
        }
    }
    // 시간초과나는코드
    // arr[0] = v[0].second;
    // for (int i = 1; i < v.size(); i++)
    // {
    //     min_lecture = {-1, 200001};
    //     for (int j = 0; j < cnt; j++)
    //     {
    //         if (arr[j] <= v[i].first)
    //         {
    //             // 방번호랑 최소시간 저장
    //             if (min_lecture.second > arr[j])
    //             {
    //                 min_lecture = {j, arr[j]};
    //             }
    //         }
    //     }
    //     if (min_lecture.first == -1)
    //     {
    //         cnt++;
    //         arr[cnt] = v[i].second;
    //     }
    //     else
    //     {
    //         arr[min_lecture.first] = v[i].second;
    //     }
    // }
    cout << pq.size() << '\n';
    return 0;
}