#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    long long numP = stoll(p);
    int lensP = p.length();
    int lensT = t.length();
    string strNum;
    int start = 0;
    while(lensT-(lensP + start) >= 0) {
        strNum = t.substr(start,lensP);
        if(stoll(strNum) <= numP) {
            answer ++;
        }
        start ++;
    }
    return answer;
}