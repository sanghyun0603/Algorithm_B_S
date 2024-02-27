#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

struct Fail
{
    float first;
    int second;
};

bool compare(const Fail& a, const Fail& b) {
    if(a.first == b.first) return a.second < b.second;
    else return a.first > b.first;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<Fail> fails;
    map<int,int> stageCount; 
    int players = stages.size();
    int cnt = 0;
    for(int i = 0; i < stages.size(); i++) {
        if(stageCount.find(stages[i]) != stageCount.end()) stageCount[stages[i]] ++;
        else stageCount.insert({stages[i],1});
    }
    for(auto &iter : stageCount) {
        float fail;
        if(iter.first > N) {
            continue;
        }
        else {
            fail = float(iter.second) / players;
            players -= iter.second;
            fails.push_back({fail,iter.first});
        }
    }
    stable_sort(fails.begin(),fails.end(),compare);
    for(int i = 0; i < fails.size(); i++) {
        answer.push_back(fails[i].second);
    }
    if(answer.size() < N) {
        for(int i = 1; i <= N; i++) {
            if(find(answer.begin(),answer.end(),i) == answer.end()) {
                answer.push_back(i);
            }
        }
    }
    return answer;
}