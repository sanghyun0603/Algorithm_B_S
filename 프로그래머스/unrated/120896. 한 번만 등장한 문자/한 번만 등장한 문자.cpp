#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string s) {
    string answer = "";
    map<char,int> m;
    for(int i = 0; i < s.length(); i++) {
        if(m.find(s[i]) != m.end()) {
            m[s[i]] ++;
        } else {
            m.insert({s[i],1});
        }
    }
    for(const auto& iter : m) {
        if(iter.second == 1) {
            answer += iter.first;
        }
    }
    return answer;
}