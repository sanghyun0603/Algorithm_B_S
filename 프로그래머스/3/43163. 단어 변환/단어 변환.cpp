#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(string begin, string target, vector<string> words) {
    int answer = 51;
    if(find(words.begin(),words.end(),target) == words.end()) {
        return 0;
    }
    //먼저 없는경우 걸러내기
    queue<pair<string,int>> q;
    int visited[51] = {};
    int cnt = 0; //단어 하나 다른거 카운트
    q.push(make_pair(begin,0));
    while(!q.empty()) {
        string s = q.front().first;
        int res = q.front().second;
        q.pop();
        if(s == target) {
            if(res < answer) answer = res;
        }
        for(int j = 0; j < words.size(); j++) {
            cnt = 0;
            for(int i = 0; i < s.length(); i++) {
                if(s[i] == words[j][i]) cnt++;
            }
            if(cnt == s.length() - 1 && !visited[j]) {
                q.push(make_pair(words[j],res + 1));
                visited[j] = 1;
            }
        }
    }
    return answer;
}