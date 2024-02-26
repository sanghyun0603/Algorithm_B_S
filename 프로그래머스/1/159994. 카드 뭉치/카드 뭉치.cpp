#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    int card1 = 0;
    int card2 = 0;
    while(card1 + card2 < goal.size()) {
        if(card1 < cards1.size() && cards1[card1] == goal[card1 + card2]) card1++;
        else if(card2 < cards2.size() && cards2[card2] == goal[card1 + card2]) card2++;
        else {
            answer = "No";
            break;
        }
    }
    return answer;
}