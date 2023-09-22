#include <string>
#include <vector>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    string s = "";
    vector<string> bino;
    for(int i = 0; i < binomial.length(); i++) {
        if(binomial[i] == ' ') {
            bino.push_back(s);
            s = "";
        } else {
            s += binomial[i];
        }
    }
    bino.push_back(s);
    if(bino[1] == "+") {
        answer = stoi(bino[0]) + stoi(bino[2]);
    } else if(bino[1] == "-") {
        answer = stoi(bino[0]) - stoi(bino[2]);
    } else {
        answer = stoi(bino[0]) * stoi(bino[2]);
    }
    return answer;
}