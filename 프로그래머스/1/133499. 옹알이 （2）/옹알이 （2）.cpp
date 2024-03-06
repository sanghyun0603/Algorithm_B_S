#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<string> babbling) {
    //연속된발음못하고 중복은되나??ayayeayaye
    set<string> se = {"aya","ye","woo","ma"};
    string previous = ""; //연속발음방지
    string baby = "";
    int answer = 0;
    for(int i = 0; i < babbling.size(); i++) {
        baby = "";
        previous = "";
        for(int j =0; j < babbling[i].length(); j++) {
            baby += babbling[i][j];
            if(se.find(baby) != se.end() && previous != baby) {
                previous = baby;
                baby = "";
            }
        }
        if(!baby.length()) answer++;
    }
    return answer;
}