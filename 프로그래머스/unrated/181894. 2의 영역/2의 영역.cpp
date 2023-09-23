#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int flag = 0;
    int firidx = -1;
    for(int i = arr.size() - 1; i > -1; i--) {
        if(arr[i] == 2) {
            flag ++;
            firidx = i;
        }
    }
    if(firidx == -1) {
        answer.push_back(-1);
    } else {
        for(int i = firidx; i < arr.size(); i++) {
            if(flag > 0) {
                if(arr[i] == 2) {
                    flag --;
                }
                answer.push_back(arr[i]);
            }
        }
    }
    return answer;
}