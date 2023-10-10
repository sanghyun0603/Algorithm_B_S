#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    vector<string> spi;
    string s;
    int num = 0;
    for(int i = 0; i < quiz.size(); i++) {
        spi.clear();
        s = "";
        for(int j = 0; j < quiz[i].size(); j++) {
            if(quiz[i][j] == ' ') {
                spi.push_back(s);
                s = "";
            } else {
                s += quiz[i][j];
            }
        }
        spi.push_back(s);
        if(spi[1] == "-") {
            num = stoi(spi[0]) - stoi(spi[2]);
        } else {
            num = stoi(spi[0]) + stoi(spi[2]);
        }
        if(num == stoi(spi[4])) {
            answer.push_back("O");
        } else {
            answer.push_back("X");
        }
    }
    return answer;
}