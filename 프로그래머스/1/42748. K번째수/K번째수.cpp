#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> slices;
    for(int i = 0; i < commands.size(); i++) {
        slices.clear();
        slices.insert(slices.begin(),array.begin() + commands[i][0] - 1,array.begin() + commands[i][1]);
        sort(slices.begin(),slices.end());
        answer.push_back(slices[commands[i][2] - 1]);
    }
    return answer;
}