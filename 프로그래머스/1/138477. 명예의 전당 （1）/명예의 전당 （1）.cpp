#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> honor;
    for(int i = 0; i < score.size(); i++) {
        honor.push_back(score[i]);
        sort(honor.begin(),honor.end());
        if(honor.size() <= k) answer.push_back(honor[0]);
        else answer.push_back(honor[honor.size() - k]);
    }
    return answer;
}