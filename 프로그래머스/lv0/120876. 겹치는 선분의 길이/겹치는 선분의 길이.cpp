#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    int arr[201] = {};
    for(int i = 0; i < lines.size(); i++) {
        for(int j = lines[i][0]; j < lines[i][1]; j++) {
            arr[j + 100] += 1;
        }
    }
    for(int i = 0; i < 201; i++) {
        if(arr[i] > 1) {
            answer ++;
        }
    }
    return answer;
}