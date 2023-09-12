#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    while(l % 5 != 0) {
        l ++;
    }
    for(int i = l; i <= r; i+=5) {
        string s = to_string(i);
        int flag = 0;
        for(int j = 0; j < s.length(); j++) {
            if(s[j] == '5' || s[j] == '0' ) {
                flag ++;
            }
        }
        if(flag == s.length()){
            answer.push_back(i);
        }
    }
    if(answer.size() == 0) {
        answer.push_back(-1);
    }
    return answer;
}