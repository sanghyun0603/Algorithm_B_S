#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int num = 0;
    string st = "";
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ' ') {
            if(st == "Z") {
                answer -= num;
                num = 0;
            } else {
                num = stoi(st);
                answer += num;
            }
            st = "";
        } else {
            st += s[i];
        }
    }
    if(st != "Z") answer += stoi(st);
    else answer -= num;
    return answer;
}