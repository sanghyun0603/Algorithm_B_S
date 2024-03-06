#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    map<string,int> m = {{"aya",1}, {"ye",1}, {"woo",1}, {"ma",1}};
    string baby ="";
    for(int i = 0; i < babbling.size(); i++) {
        baby = "";
        map<string,int> m1 = m;
        for(int j = 0; j < babbling[i].length(); j++) {
            baby += babbling[i][j];
            if(m1[baby] == 1) m1[baby] --, baby = "";
        }
        if(!baby.length()) answer++;
    }
    return answer;
}