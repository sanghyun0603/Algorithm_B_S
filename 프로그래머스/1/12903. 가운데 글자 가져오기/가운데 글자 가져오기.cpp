#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int lens = s.length();
    if(lens%2 == 0) {
        answer = s.substr(lens/2 - 1,2);
    } else {
        answer = s.substr(lens/2,1);
    }
    return answer;
}