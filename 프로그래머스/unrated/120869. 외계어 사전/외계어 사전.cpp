#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;
    int cnt = 0;
    for(int i = 0; i < dic.size(); i++) {
        map<string,int> alpha;
        cnt = 0;
        for(int j = 0; j < dic[i].size(); j++) {
            string s;
            s += dic[i][j];
            alpha[s] ++;
        }
        for(int j = 0; j < spell.size(); j++) {
            if(alpha.find(spell[j]) != alpha.end()) {
                if(alpha[spell[j]] == 1) {
                    cnt ++;
                }
            }
        }
        if(cnt == spell.size()) {
            answer = 1;
            break;
        }
    }
    return answer;
}