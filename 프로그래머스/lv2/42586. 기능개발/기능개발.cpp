#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> q;
    for(int i = 0; i < progresses.size(); i++) {
        if((100 - progresses[i]) % speeds[i] == 0) {
            q.push((100 - progresses[i]) / speeds[i]);
        } else {
            q.push((100 - progresses[i]) / speeds[i] + 1);
        }
    }
    int b = q.front();
    int sameday = 0;
    while(!q.empty()) {
        if(q.front() <= b) {
            sameday ++;
            q.pop();
            if(q.empty()) answer.push_back(sameday);
        } else {
            b = q.front();
            answer.push_back(sameday);
            sameday = 0;
        }
    }
    
    return answer;
}