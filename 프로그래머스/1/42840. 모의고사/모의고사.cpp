#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int score[4] = {};
    int arr1[10] = {1,2,3,4,5,1,2,3,4,5};
    int arr2[8] = {2,1,2,3,2,4,2,5};
    int arr3[10] = {3,3,1,1,2,2,4,4,5,5};
    int dir13 = 0;
    int dir2 = 0;
    int maxs = 0;
    for(int i = 0; i < answers.size(); i++) {
        if(dir13 >= 10) dir13 = 0;
        if(dir2 >= 8) dir2 = 0;
        if(arr1[dir13] == answers[i]) score[1] ++;
        if(arr2[dir2] == answers[i]) score[2] ++;
        if(arr3[dir13] == answers[i]) score[3] ++;
        dir13 ++;
        dir2 ++;
     }
    for(int i = 1; i < 4; i++) {
        if(score[i] > maxs) {
            maxs = score[i];
        }
    }
    for(int i = 1; i < 4; i++) {
        if(maxs == score[i]) {
            answer.push_back(i);
        }
    }
    return answer;
}