#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map<string,int> comp;
    for(int i = 0; i < completion.size(); i++) {
        if(comp.find(completion[i]) != comp.end()) {
            comp[completion[i]] ++;
        } else {
            comp.insert({completion[i],1});
        }
    }
    for(int i = 0; i < participant.size(); i++) {
        if(comp.find(participant[i]) == comp.end()) {
            answer = participant[i];
            break;
        } else {
            if(comp[participant[i]] == 0) {
                answer = participant[i];
                break;
            } else {
                comp[participant[i]] --;
            }
        }
    }
    return answer;
}