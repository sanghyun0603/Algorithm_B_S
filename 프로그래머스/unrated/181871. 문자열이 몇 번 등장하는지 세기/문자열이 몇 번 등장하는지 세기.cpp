#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    for(int i = 0; i < myString.length(); i++) {
        if(myString[i] == pat[0]) {
            int flag = 0;
            for(int j = i; j < i + pat.length(); j++) {
                if(myString[j] == pat[flag]) {
                    flag ++;
                }
            }
            if(flag == pat.length()) {
                answer ++;
            }
        }
    }
    return answer;
}