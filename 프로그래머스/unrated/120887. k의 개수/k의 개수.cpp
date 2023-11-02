#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    string s = "";
    char a = k + 48;
    for(int n = i; n <= j; n++) {
        s = to_string(n);
        for(int m = 0; m < s.length(); m++) {
            if(a == s[m]) {
                answer ++;
            }
        }
    }
    return answer;
}