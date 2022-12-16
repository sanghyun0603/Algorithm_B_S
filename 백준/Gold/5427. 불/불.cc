#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int R,C;
char arr[1002][1002];
int visited[1002][1002];
int fire[1002][1002];
int suc = 0;
int di[] = {1,0,-1,0};
int dj[] = {0,1,0,-1};

void fire_bfs(deque<pair<int,int>> fire_spread)
{
    while(!fire_spread.empty())
    {
        int x = fire_spread.front().first;
        int y = fire_spread.front().second;
        fire_spread.pop_front();
        for (int i = 0; i < 4; ++i) {
            int ni = x + di[i];
            int nj = y + dj[i];
            if (ni >= 0 && ni < R && nj >= 0 && nj < C && arr[ni][nj] != '#' && fire[ni][nj] == 0)
            {
                fire[ni][nj] = fire[x][y] +1;
                fire_spread.emplace_back(ni,nj);
            }
        }
    }
}

void human_bfs(deque<pair<int,int>> human)
{
    while(!human.empty())
    {
        int x = human.front().first;
        int y = human.front().second;
        human.pop_front();
        for (int i = 0; i < 4 ; ++i) {
            int ni = x + di[i];
            int nj = y + dj[i];
            if (ni < 0 || ni >= R || nj < 0 || nj >= C)
            {
                cout << visited[x][y] << '\n';
                return ;
            }
            if (ni >= 0 && ni < R && nj >= 0 && nj < C && arr[ni][nj] != '#' && visited[ni][nj] == 0 )
            {
                if (visited[x][y]+1 < fire[ni][nj])
                {
                    visited[ni][nj] = visited[x][y] +1;
                    human.emplace_back(ni,nj);
                }
                else if (fire[ni][nj] == 0)
                {
                    visited[ni][nj] = visited[x][y] +1;
                    human.emplace_back(ni,nj);
                }

            }
        }
    }
    suc = 1;
    return;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    for (int w = 0; w < T ; ++w) {
        deque<pair<int,int>> fire_spread;
        deque<pair<int,int>> human;
        suc = 0;
        cin >> C >> R;
        fill(&fire[0][0], &fire[R-1][C], 0);
        fill(&visited[0][0], &visited[R -1][C], 0);
        for (int i = 0; i < R ; ++i) {
            cin >> arr[i];
        }
        for (int i = 0; i < R ; ++i) {
            for (int j = 0; j < C ; ++j) {
                if (arr[i][j] == '*')
                {
                    fire_spread.emplace_back(i,j);
                    fire[i][j] = 1;
                }
                if (arr[i][j] == '@')
                {
                    human.emplace_back(i,j);
                    visited[i][j] = 1;
                }
            }
        }
        if (fire_spread.empty())// 불이 없는 경우 조건 처리
        {
            for (int i = 0; i < R; ++i) {
                for (int j = 0; j < C; ++j) {
                    fire[i][j] = 1000005;
                }
            }
        }
        fire_bfs(fire_spread);
        human_bfs(human);
        fire_spread.clear();
        human.clear();
        if (suc == 1)
        {
            cout << "IMPOSSIBLE" << '\n';
        }
    }
    return 0;
}