#include <string>
#include <vector>
#include <queue>

using namespace std;


int solution(int m, int n, vector<vector<int>> puddles) {
    int answer = 0;
    int arr[101][101] = {};
    int visited[101][101] = {};
    int dp[101][101] = {};
    int dx[2] = {0,1};
    int dy[2] = {1,0};
    queue<pair<int,int>> q;
    for(int i = 0; i < puddles.size(); i++) {
        arr[puddles[i][0] - 1][puddles[i][1] - 1] = 1;
    }
    q.push(make_pair(0,0));
    dp[0][0] = 1;
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if(x == (m - 1) && y == (n - 1)) {
            continue;
        }
        else {
            for(int i = 0; i < 2; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(arr[nx][ny] != 1 && nx < m && ny < n) {
                    dp[nx][ny] += dp[x][y] % 1000000007;
                    if(!visited[nx][ny]) {
                        visited[nx][ny] = 1;
                        q.push(make_pair(nx,ny));
                    }
                }
            }
        }
    }
    
    return dp[m-1][n-1] % 1000000007;
}