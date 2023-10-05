#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;
    map<string, pair<int,int>> inputs = {{"down", make_pair(-1,0)},{"up",make_pair(1,0)},{"right",make_pair(0,1)}, {"left", make_pair(0,-1)}};
    int movex = board[0] / 2;
    int movey = board[1] / 2;
    for(int i = 0; i < keyinput.size(); i++) {
        movex += inputs[keyinput[i]].second;
        movey += inputs[keyinput[i]].first;
        if(movex < 0 || movex >= board[0] || movey < 0 || movey >= board[1]) {
            movex -= inputs[keyinput[i]].second;
            movey -= inputs[keyinput[i]].first;
        }
    }
    answer.push_back(movex - (board[0] / 2));
    answer.push_back(movey - (board[1] / 2));
    return answer;
}