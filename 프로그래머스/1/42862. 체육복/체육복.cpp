#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = n;
    sort(lost.begin(),lost.end());
    sort(reserve.begin(),reserve.end());
    for(int i = 0; i < lost.size(); i++) {
        for(int j = 0; j < reserve.size(); j++) {
            if(lost[i] == reserve[j]) {
                reserve[j] = -2;
                lost[i] = -5;
            }
        }
    }
    for(int i = 0; i < lost.size(); i++) {
        for(int j = 0; j < reserve.size(); j++) {
            if(reserve[j] == lost[i] + 1 || reserve[j] == lost[i] - 1) {
                reserve[j] = -2;
                lost[i] = -5;
            }
        }
    }
    for(int i = 0; i < lost.size(); i++) {
        if(lost[i] != -5) {
            answer -= 1;
        }
    }
    return answer;
}