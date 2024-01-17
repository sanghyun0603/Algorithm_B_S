#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ' ') continue;
        else if(isupper(s[i])) {
            s[i] = (s[i]+n-'A')%26 + 'A';
        } else {
            s[i] = (s[i]+n-'a')%26 + 'a';
        }
    }
    return s;
}