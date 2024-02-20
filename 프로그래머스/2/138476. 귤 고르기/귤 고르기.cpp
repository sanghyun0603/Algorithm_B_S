#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

bool compare(pair<int,int> &a, pair<int,int> &b) {
    return a.second > b.second;
}

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    map<int, int> m;
    vector<pair<int,int>> v;
    int cnt = 0;
    for(int i = 0; i < tangerine.size(); i++) {
        if(m.find(tangerine[i]) != m.end()) m[tangerine[i]] ++;
        else m.insert({tangerine[i],1});
    }
    for(auto& it : m) {
        v.push_back(it);
    }
    sort(v.begin(),v.end(), compare);
    for(int i = 0; i < v.size(); i++) {
        if(cnt + v[i].second < k) {
            cnt += v[i].second;
            answer ++;
        } else break;
    }
    answer ++;
    return answer;
}