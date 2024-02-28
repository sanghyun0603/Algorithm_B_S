#include <string>
#include <vector>
#include <map>
#include <cctype>

using namespace std;

int solution(string s) {
    int answer = 0;
    string nu = "";
    string numberString = "";
    map<string,string> m ={{"zero","0"},{"one","1"},{"two","2"},{"three","3"},{"four","4"},{"five","5"},{"six","6"},{"seven","7"},{"eight","8"},{"nine","9"}};
    for(int i = 0; i < s.length(); i++) {
        if(isdigit(s[i])) {
            numberString += s[i];
            nu = "";
        } else {
            nu += s[i];
            if(m.find(nu) != m.end()) {
                numberString += m[nu];
                nu = "";
            }
        }
    }
    answer = stoi(numberString);
    return answer;
}