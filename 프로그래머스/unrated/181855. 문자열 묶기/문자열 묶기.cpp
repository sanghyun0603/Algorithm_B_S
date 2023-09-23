#include <string>
#include <vector>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    int score[30] ={};
    for(int i = 0; i < strArr.size(); i++) {
        score[strArr[i].length() - 1] += 1;
    }
    for(int i = 0; i < 30; i++) {
        if(answer < score[i]) {
            answer = score[i];
        }
    }
    return answer;
}