#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    string s = "";
    while(n > 0) {
        s += to_string(n%3);
        n /= 3;
    }
    int lens = s.length();
    for(int i = 0; i < lens; i++) {
        answer += (s[lens - 1 - i] - '0') * pow(3,i);
    }
    return answer;
}