#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<int,int>& a, const pair<int,int>& b) {
    if(a.second < b.second) {
        return true;
    } else if(a.second == b.second) {
        return a.first > b.first;
    }
    return false;
}

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    vector<pair<int,int>> solve;
    //n과의 거리차를 pair이용해서 num_list 원소들과 저장후 sort?
    for(int i = 0 ; i < numlist.size(); i++) {
        solve.push_back(make_pair(numlist[i],abs(n-numlist[i])));
    }
    sort(solve.begin(), solve.end(), compare);
    for(int i = 0; i < solve.size(); i++) {
        answer.push_back(solve[i].first);
    }
    return answer;
}