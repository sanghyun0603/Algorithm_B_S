#include <iostream>
#include <deque>
using namespace std;

int arr[1002][1002];
int visited[1002][1002];
int N,M;
int di[] = {1,0,-1,0};
int dj[] = {0,1,0,-1};
int res = 0;
void bfs(deque<pair<int,int>> dq)
{
    while(!dq.empty()) {
        int x = dq.front().first;
        int y = dq.front().second;
        dq.pop_front();
        for (int i = 0; i < 4; ++i) {
            int ni = x + di[i];
            int nj = y + dj[i];
            if (ni >= 0 && ni < N && nj >= 0 && nj < M && visited[ni][nj] == 0 && arr[ni][nj] == 0) {
                visited[ni][nj] = visited[x][y] + 1;
                dq.push_back({ni, nj});
            }
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    deque<pair<int,int>> dq;
    cin >> M >> N ; //가로 세로
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                dq.push_back({i,j});
                visited[i][j] = 1;
            }
            if (arr[i][j] == -1)
            {
                visited[i][j] = -1;
            }
        }
    }
    bfs(dq);
    for (int i = 0; i < N ; ++i) {
        for (int j = 0; j < M ; ++j) {
            if (visited[i][j] == 0)
            {
                cout << -1 << '\n';
                return 0;
            }
            if (res < visited[i][j])
            {
                res = visited[i][j];
            }
        }
    }
    cout << res-1 << '\n';

    return 0;
}