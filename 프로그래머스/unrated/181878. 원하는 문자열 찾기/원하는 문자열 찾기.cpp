#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    for(int i = 0; i < myString.length(); i++) {
        if(isupper(myString[i])) {
            myString[i] += 32;
        }
    }
    for(int i = 0; i < pat.length(); i++) {
        if(isupper(pat[i])) {
            pat[i] += 32;
        }
    }
    if(myString.find(pat) != string::npos) {
        answer = 1;
    }
    return answer;
}