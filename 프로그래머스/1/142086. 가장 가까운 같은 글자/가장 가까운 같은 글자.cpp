#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    string a;
    int post = 0;
    for(int i = 0; i < s.length(); i++) {
        post = 0;
        for(int j = i - 1; j >= 0; j--) {
            if(s[i] == s[j]) {
                post = i - j;
                break;
            }
        }
        if(post == 0) answer.push_back(-1);
        else {
            answer.push_back(post);
        }
    }
    return answer;
}