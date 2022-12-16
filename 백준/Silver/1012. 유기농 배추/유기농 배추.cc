#include <iostream>
#include <queue>
#include <algorithm>

int arr[52][52];
int visited[52][52];
int T;
int M,N,K;
int cnt;
int di[4] = {1,-1,0,0};
int dj[4] = {0,0,1,-1};

void bfs(int r, int c)
{
    std::queue<std::pair<int,int>> q;
    q.emplace(r,c);
    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; ++i) {
            int ni = x + di[i];
            int nj = y + dj[i];
            if (ni >=0 && ni < N && nj >= 0 && nj < M && arr[ni][nj] == 1 && visited[ni][nj] == 0)
            {
                visited[ni][nj] = 1;
                q.emplace(ni,nj);
            }
        }
    }
}

int main(void)
{
    std::cin >> T;
    for (int i = 0; i < T; ++i) {
        cnt = 0;
        std::cin >> M >> N >> K;
        std::fill(&arr[0][0],&arr[N-1][M],0);
        std::fill(&visited[0][0],&visited[N-1][M],0);
        for (int j = 0; j < K; ++j) {
            int x,y;
            std::cin >> x >> y;
            arr[y][x] = 1;
        }
        for (int j = 0; j < N; ++j) {
            for (int k = 0; k < M; ++k) {
                if (arr[j][k] == 1 && visited[j][k] == 0)
                {
                    visited[j][k] = 1;
                    bfs(j,k);
                    cnt +=1;
                }
            }
        }
        std::cout << cnt << '\n';
    }

    return 0;
}
