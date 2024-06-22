#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int INF = 987654321;
vector<pair<int, int>> ve[20001];
int vis[20001];

void djki(int start)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});
    vis[start] = 0;
    while (!pq.empty())
    {
        int cost = pq.top().first;
        int u = pq.top().second;
        pq.pop();
        if (vis[u] < cost)
            continue;
        for (int i = 0; i < ve[u].size(); i++)
        {
            int next_u = ve[u][i].first;
            int n_cost = cost + ve[u][i].second;
            if (vis[next_u] > n_cost)
            {
                pq.push({n_cost, next_u});
                vis[next_u] = n_cost;
            }
        }
    }
}

int main()
{
    int v, e, start;
    cin >> v >> e;
    cin >> start;
    for (int i = 1; i <= v; i++)
    {
        vis[i] = INF;
    }
    for (int i = 0; i < e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        ve[u].push_back({v, w});
    }
    djki(start);
    for (int i = 1; i <= v; i++)
    {
        if (vis[i] == INF)
            cout << "INF" << '\n';
        else
            cout << vis[i] << '\n';
    }

    return 0;
}