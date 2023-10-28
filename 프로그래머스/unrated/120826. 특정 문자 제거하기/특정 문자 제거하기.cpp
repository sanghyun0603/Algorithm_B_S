#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    string s;
    for(int i = 0; i < my_string.length(); i++) {
        s = (my_string[i]);
        if(s != letter) {
            answer += my_string[i];
        } 
    }
    return answer;
}