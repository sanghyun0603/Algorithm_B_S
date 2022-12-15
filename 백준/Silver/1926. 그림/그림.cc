#include <iostream>
#include <deque>
using namespace std;

int n,m;
int arr[501][501] = { 0, };
int visited[501][501] = {0,};
int di[] = { 1,-1,0,0 };
int dj[] = { 0,0,1,-1 };
int res = 0;
int cnt = 0;
int bfs(int x, int y) {
    deque<pair<int,int>> dq;
    dq.push_back({x,y});
    while(!dq.empty()){
        int x = dq.front().first;
        int y = dq.front().second;
        dq.pop_front();
        cnt += 1;
        for (int i = 0; i < 4 ; ++i) {
            int ni = x + di[i];
            int nj = y + dj[i];
            if (ni >= 0 && ni < n && nj >= 0 && nj < m && arr[ni][nj] == 1 && visited[ni][nj] == 0){
                visited[ni][nj] = 1;
                dq.push_back({ni,nj});
            }
        }
    }
    return cnt;
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int artcnt = 0;
    cin >> n >> m;
    for (int i = 0; i < n ; ++i) {
        for (int j = 0; j < m ; ++j) {
            int num;
            cin >> num;
            arr[i][j] = num;
        }
    }
    for (int i = 0; i < n ; ++i) {
        for (int j = 0; j < m ; ++j) {
            if (arr[i][j] == 1 && visited[i][j] == 0 ){
                visited[i][j] = 1;
                bfs(i,j);
                if (res < cnt){
                    res = cnt;
                }
                cnt = 0;
                artcnt += 1;
            }
        }
    }
    cout << artcnt << '\n';
    if (artcnt == 0){
        cout << 0 << '\n';
    }
    else {
        cout << res << '\n';
    }
    return 0;
}
