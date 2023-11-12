#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string,int> m;
    for(int i = 0; i < clothes.size(); i++) {
        if(m.find(clothes[i][1]) != m.end()) {
            m[clothes[i][1]] ++;
        } else {
            m.insert({clothes[i][1],1});
        }
    }
    for(const auto& iter : m) {
        answer *= (iter.second + 1);
    }
    answer -= 1;
    return answer;
}