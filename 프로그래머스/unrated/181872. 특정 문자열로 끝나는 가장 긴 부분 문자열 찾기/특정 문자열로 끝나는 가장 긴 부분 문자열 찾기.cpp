#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    int strlens = myString.length() - 1;
    int patlens = pat.length() - 1;
    for(int i = strlens; i >= 0; i--) {
        if(myString[i] == pat[patlens]) {
            if(patlens > 0) {
                int flag = 0;
                while(flag < pat.length()) {
                    if(myString[i-flag] == pat[patlens-flag]) {
                        flag ++;
                    }
                }
                if(flag == pat.length()) {
                    answer = myString.substr(0,i+1);
                    break;
                }
            } else {
                answer = myString.substr(0,i+1);
                break;
            }
        }
    }
    return answer;
}