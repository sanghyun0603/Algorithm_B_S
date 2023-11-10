#include <string>
#include <vector>

using namespace std;
int maxs = 0;
int visit[8] = {};
void back_track(int idx, int stemi, vector<vector<int>>& dungeons,int cnt) {
    if(cnt > maxs) {
        maxs = cnt;
    }
    for(int i = 0; i < dungeons.size(); i++) {
        if(visit[i] == 1 || dungeons[i][0] > stemi) continue;
        if(stemi >= dungeons[i][0]) {
            visit[i] = 1;
            back_track(i,stemi - dungeons[i][1], dungeons, cnt + 1);
            visit[i] = 0;
        }
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    int answer = -1;
    maxs = 0;
    back_track(0,k,dungeons,0);
    
    return maxs;
}