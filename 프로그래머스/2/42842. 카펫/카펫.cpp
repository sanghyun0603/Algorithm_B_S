#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    //기본 8개에 가로 하나늘때마다 +2 세로 하나늘때마다 +2 brown
    //yellow를 야무지게 나눠야하는데
    int yel = yellow < 5 ? yellow : yellow/2;
    for(int i = 1; i <= yel; i++) {
        for(int j = 1; j <= yel; j++) {
            if(i * j == yellow) {
                if(8 + ((i-1)*2) + ((j-1)*2) == brown) {
                    answer.push_back(j+2);
                    answer.push_back(i+2);
                    return answer;
                }
            }
        }
    }
    return answer;
}