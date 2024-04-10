#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int visited[1001][1001] = {};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[1001][1001];

    int res[1001][1001];
    fill(&res[0][0], &res[1000][1001], -1);
    int n, m;
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    queue<pair<pair<int, int>, int>> q;
    int pr = 0, pc = 0;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 2)
            {
                pr = i;
                pc = j;
            }
        }
    }
    q.push({{pr, pc}, 0});
    visited[pr][pc] = 1;
    res[pr][pc] = 0;
    // 현재위치랑, 이동거리
    while (!q.empty())
    {
        int r = q.front().first.first;
        int c = q.front().first.second;
        int cnt = q.front().second;
        q.pop();
        for (int k = 0; k < 4; k++)
        {
            int nr = r + dx[k];
            int nc = c + dy[k];
            if (0 <= nr && nr < n && 0 <= nc && nc < m && visited[nr][nc] == 0 && arr[nr][nc] != 0)
            {
                res[nr][nc] = cnt + 1;
                visited[nr][nc] = 1;
                q.push({{nr, nc}, cnt + 1});
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                res[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << res[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
