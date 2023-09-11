#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    for(int i = 1; i < numLog.size(); i++) {
        if(numLog[i] - numLog[i - 1] == 1) {
            answer.push_back('w');
        } else if(numLog[i] - numLog[i - 1] == -1) {
            answer.push_back('s');
        } else if(numLog[i] - numLog[i - 1] == 10) {
            answer.push_back('d');
        } else {
            answer.push_back('a');
        }
    }
    return answer;
}