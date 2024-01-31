#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    int cnt = 0;
    int mins = 1000;
    sort(score.begin(), score.end(), greater<>());
    for(int i = 0; i < score.size(); i++) {
        mins = mins > score[i] ? score[i] : mins;
        cnt ++;
        if(cnt == m) {
            cnt = 0;
            answer += mins * m;
        }
    }
    
    return answer;
}