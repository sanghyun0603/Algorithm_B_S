#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int cnt = 0;
    int n = 0;
    int sizes = progresses.size();
    while(cnt < sizes) {
        for(int i = cnt; i < sizes; i++) {
            progresses[i] += speeds[i];
        }
        while(true) {
            if(progresses[cnt] >= 100 && cnt < sizes) {
                n++;
                cnt ++;
            } else {
                if(n > 0) answer.push_back(n);
                n = 0;
                break;
            }
        }
    }
    
    return answer;
}