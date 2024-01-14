#include <string>
#include <vector>

using namespace std;

int bins(int num) {
    string s;
    int cnt = 0;
    while(num != 0) {
        if(num % 2 == 1) {
            s += "1";
        } else {
            s += "0";
        }
        num /= 2;
    }
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '1') {
            cnt ++;
        }
    }
    return cnt;
}

int solution(int n) {
    int answer = 0;
    int cnt = bins(n);
    int a;
    for(int i = n + 1; i < 1000001; i++) {
        a = bins(i);
        if(a == cnt) {
            answer = i;
            break;
        }
    }
    return answer;
}