#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer = 0;
    int cnt = 1;
    int A_lens = A.length();
    string s;
    if(A == B) {
        return 0;
    }
    while(cnt < A_lens) {
        s = A[A_lens - 1] + A.substr(0,A_lens - 1);
        if(s == B) {
            answer = cnt;
            break;
        }
        A = s;
        cnt ++;
    }
    if(answer == 0) answer = -1;
    return answer;
}