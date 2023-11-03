#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int mins = 2100000000;
    if(arr.size() == 1) {
        answer.push_back(-1);
        return answer;
    }
    for(int i = 0 ; i < arr.size(); i++) {
        if(mins > arr[i]) {
            mins = arr[i];
        }
    }
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] != mins) answer.push_back(arr[i]);
    }
    if(!answer.size()) answer.push_back(-1);
    
    return answer;
}