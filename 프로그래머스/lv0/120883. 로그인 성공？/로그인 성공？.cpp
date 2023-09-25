#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "fail";
    string ids = id_pw[0];
    string pass = id_pw[1];
    for(int i = 0; i < db.size(); i++) {
        if(ids == db[i][0]) {
            if(pass == db[i][1]) {
                answer = "login";
                break;
            } else {
                answer = "wrong pw";
            }
        }
    }
    return answer;
}