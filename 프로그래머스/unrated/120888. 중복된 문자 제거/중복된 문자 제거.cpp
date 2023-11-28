#include <string>
#include <vector>
#include <set>

using namespace std;

string solution(string my_string) {
    string answer = "";
    set<char> s;
    for(int i = 0; i < my_string.length(); i++) {
        if(s.find(my_string[i]) == s.end()) {
            answer += my_string[i];
            s.insert(my_string[i]);
        }
    }
    return answer;
}