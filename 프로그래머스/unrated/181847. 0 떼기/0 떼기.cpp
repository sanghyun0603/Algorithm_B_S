#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
    int flag = 0;
    for(int i = 0; i < n_str.length(); i++) {
        if(n_str[i] == '0') {
            if(flag) {
                answer.push_back(n_str[i]);
            }
        } else {
            flag = 1;
            answer.push_back(n_str[i]);
        }
    }
    return answer;
}