#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;
    for(int i = 0; i < intervals.size(); i++) {
        int beg = intervals[i][0];
        int ends = intervals[i][1];
        for(int j = beg; j <= ends; j++) {
            answer.push_back(arr[j]);
        }
    }
    return answer;
}