#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<pair<int,int>> rank;
    //make_pair로 idx와 
    for(int i = 0; i < emergency.size(); i++) {
        rank.push_back(make_pair(emergency[i],i));
    }
    sort(rank.begin(), rank.end(),greater<>());
    for(int i = 0; i < rank.size(); i++) {
        emergency[rank[i].second] =  i + 1;
    }
    return emergency;
}