#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    vector <int> dice = {a,b,c,d};
    sort(dice.begin(),dice.end());
    if(dice[0] == dice[1] && dice[1] == dice[2] && dice[2] == dice[3]) {
        answer = 1111 * dice[0];
    } else if((dice[0] == dice[1] && dice[1] == dice[2]) || (dice[1] == dice[2] && dice[2] == dice[3])) {
        if(dice[0] == dice[1]) {
            answer = (10 * dice[0] + dice[3]) * (10 * dice[0] + dice[3]);
        } else {
            answer = (10 * dice[3] + dice[0]) * (10 * dice[3] + dice[0]);
        }
    } else if(dice[0] == dice[1] && dice[2] == dice[3]) {
        answer = (dice[0] + dice[2]) * abs(dice[0] - dice[2]);
    } else if(dice[0] == dice[1] || dice[1] == dice[2] || dice[2] == dice[3] ) {
        if(dice[0] == dice[1]) {
            answer = dice[2] * dice[3];
        } else if(dice[1] == dice[2]) {
            answer = dice[0] * dice[3];
        } else {
            answer = dice[0] * dice[1];
        }
    } else {
        answer = dice[0];
    }
    return answer;
}