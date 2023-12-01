#include<vector>
#include<queue>
using namespace std;

int visited[101][101] = {};
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

void bfs(vector<vector<int>>& maps, int destiX, int destiY) {
    visited[0][0] = 1;
    queue<pair<int,int>> q;
    q.push(make_pair(0,0));
    int nx = 0;
    int ny = 0;
    while(!q.empty()) {
        pair<int,int> a = q.front();
        q.pop();
        for(int i = 0; i < 4; i++) {
            nx = a.first + dx[i];
            ny = a.second + dy[i];
            if(0<= nx && nx < destiX && 0<= ny && ny < destiY && visited[nx][ny] == 0 && maps[nx][ny] == 1 ) {
                q.push(make_pair(nx,ny));
                visited[nx][ny] = visited[a.first][a.second] + 1;
                
            }
        }
    }
}

int solution(vector<vector<int> > maps)
{
    int answer = 0;
    int destiX = maps.size();
    int destiY = maps[0].size();
    bfs(maps, destiX, destiY);
    if(visited[destiX-1][destiY-1] == 0) {
        answer = -1;
    } else {
        answer = visited[destiX-1][destiY-1];
    }
    return answer;
}