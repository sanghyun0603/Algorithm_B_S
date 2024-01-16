#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    int cnt = 0;
    for(int i = 0; i < number.size() - 2; i++) {
        cnt = number[i];
        for(int j = i + 1; j < number.size() - 1; j++) {
            cnt += number[j];
            for(int k = j + 1; k < number.size(); k++) {
                cnt += number[k];
                if(cnt == 0) answer ++;
                cnt -= number[k];
            }
            cnt -= number[j];
        }
    }
    return answer;
}