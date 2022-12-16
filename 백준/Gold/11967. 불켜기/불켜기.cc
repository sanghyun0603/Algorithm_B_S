#include <iostream>
#include <queue>
#include <vector>

std::vector<std::pair<int,int>> v[102][102];
int N,M;
int arr[102][102];//불키는방
int visited[102][102];
int move[102][102];
int di[4] = {1,-1,0,0};
int dj[4] = {0,0,1,-1};
void bfs()
{
    std::queue<std::pair<int,int>> q;
    arr[0][0] = 1;
    visited[0][0] = 1;
    q.emplace(0,0);
    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (auto& lig :  v[x][y]) {
            arr[lig.first][lig.second] = 1; // 불키기
        }
        for (int i = 0; i < 4; ++i) {//불킨방 이동가능한 경우 넣기
            int ni = x+ di[i];
            int nj = y+ dj[i];
            if (ni >= 0 && ni < N && nj >= 0 && nj < N)
            {
                move[ni][nj] = 1;
            }
        }
        for (int j = 0; j < N; ++j) {//매번 확인해야해서 느리다.
            for (int k = 0; k < N; ++k) {
                if (visited[j][k] == 0 && arr[j][k] == 1 && move[j][k] == 1)
                {
                    visited[j][k] = 1;
                    q.emplace(j,k);
                }
            }
        }

    }
}

int main(void)
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::cin >> N >> M;
    for (int i = 0; i < M; ++i) {
        int x,y,a,b;
        std::cin >> x >> y >> a >> b;
        v[x-1][y-1].emplace_back(a-1,b-1);
    }
    bfs();
    int cnt = 0;
    for (int i = 0; i < N ; ++i) {
        for (int j = 0; j < N ; ++j) {
            if (arr[i][j] == 1)
            {
                cnt += 1;
            }
        }
    }
    std::cout << cnt << '\n';
}