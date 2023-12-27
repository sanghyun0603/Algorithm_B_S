#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    int cnt = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ' ') cnt = 0;
        else if(cnt == 0 && isdigit(s[i])) cnt = 1;
        else if(cnt == 0 && !isdigit(s[i])) {
            cnt = 1;
            if(islower(s[i])) {
                s[i] -= 32;
            }
        }
        else if(cnt == 1 && !isdigit(s[i])) {
            if(isupper(s[i])) {
                s[i] += 32;
            }
        }
    }
    return s;
}