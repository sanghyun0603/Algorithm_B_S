#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    vector<string> str;
    string s = "";
    for(int i = 0; i < my_string.length(); i++) {
        if(my_string[i] == ' ') {
            str.push_back(s);
            s = "";
        } else {
            s += my_string[i];
            if(i == my_string.length()-1) {
                str.push_back(s);
            }
        }
    }
    answer = stoi(str[0]);
    for(int i = 1; i < str.size(); i++) {
        if(str[i] == "+") {
            answer += stoi(str[i+1]);
        } else if(str[i] == "-") {
            answer -= stoi(str[i+1]);
        }
    }
    return answer;
}