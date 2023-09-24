#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    int arr[31][31] = {};
    int di[] = {0,1,0,-1};
    int dj[] = {1,0,-1,0};
    int ni = 0;
    int nj = 0;
    int cnt = 1;
    int dir = 0;
    while(cnt <= n * n) {
        if(ni > -1 && ni < n && nj > -1 && nj < n && arr[ni][nj] == 0) {
            arr[ni][nj] = cnt;
            cnt ++;
            ni += di[dir];
            nj += dj[dir];
        } else {
            ni -= di[dir];
            nj -= dj[dir];
            dir = (dir + 1) % 4;
            ni += di[dir];
            nj += dj[dir];
        }
    }
    for(int i = 0; i < n; i++) {
        answer.push_back(vector<int>(arr[i],arr[i] + n));
    }
    
    return answer;
}