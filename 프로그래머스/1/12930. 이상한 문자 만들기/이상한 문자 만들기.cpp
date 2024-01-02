#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    int idx = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ' ') idx = 0;
        else {
            if(idx % 2 == 0 && islower(s[i])) {
                s[i] -= 32;
            }
            if(idx % 2 == 1 && isupper(s[i])) {
                s[i] += 32;
            }
            idx ++;
        }
    }
    return s;
}