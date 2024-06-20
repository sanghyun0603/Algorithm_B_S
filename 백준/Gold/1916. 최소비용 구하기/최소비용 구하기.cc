#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

vector<pair<int, int>> v[1001];
int visited[1001];

void djki(int start)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    // 비용,도시
    pq.push({0, start});
    visited[start] = 0;
    while (!pq.empty())
    {
        int cost = pq.top().first; // 누적비용
        int city = pq.top().second;
        pq.pop();
        if (visited[city] < cost)
            continue;
        for (int i = 0; i < v[city].size(); i++)
        {
            int nc = v[city][i].first;
            int ncost = cost + v[city][i].second;
            if (visited[nc] > ncost)
            {
                pq.push({ncost, nc});
                visited[nc] = ncost;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i <= n; i++)
    {
        visited[i] = INT_MAX; // 비용최대로
    }
    for (int i = 0; i < m; i++)
    {
        int st, end, cost;
        cin >> st >> end >> cost;
        v[st].push_back({end, cost});
    }
    int start, end;
    cin >> start >> end; // 출발도착도시
    djki(start);
    cout << visited[end] << '\n';
    return 0;
}