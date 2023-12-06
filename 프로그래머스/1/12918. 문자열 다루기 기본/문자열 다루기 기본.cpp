#include <string>
#include <vector>
#include <cctype>

using namespace std;

bool solution(string s) {
    bool answer = true;
    if(s.length() == 4 || s.length() == 6) {
        for(auto a : s) {
            if(isdigit(a) == 0) {
                answer = false;
                break;
            }
        }
    } else {
        answer = false;
    }
    return answer;
}