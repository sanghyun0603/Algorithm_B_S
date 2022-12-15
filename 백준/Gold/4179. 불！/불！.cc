#include <iostream>
#include <deque>
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
            if (ni >= 0 && ni < R && nj >= 0 && nj < C && arr[ni][nj] != '#' && visited[ni][nj] == 0 && visited[x][y]+1 < fire[ni][nj] )
            {
                visited[ni][nj] = visited[x][y] +1;
                human.emplace_back(ni,nj);
            }
        }
    }
    suc = 1;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    deque<pair<int,int>> fire_spread;
    deque<pair<int,int>> human;
    cin >> R >> C;
    for (int i = 0; i < R ; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < R ; ++i) {
        for (int j = 0; j < C ; ++j) {
            if (arr[i][j] == 'F')
            {
                fire_spread.emplace_back(i,j);
                fire[i][j] = 1;
            }
            if (arr[i][j] == 'J')
            {
                human.emplace_back(i,j);
                visited[i][j] = 1;
            }
        }
    }
    if (fire_spread.empty())
    {
        for (int i = 0; i < R; ++i) {
            for (int j = 0; j < C; ++j) {
                fire[i][j] = 1000005;
            }
        }
    }
    fire_bfs(fire_spread);
    human_bfs(human);
    if (suc == 1)
    {
        cout << "IMPOSSIBLE" << '\n';
    }
    return 0;
}