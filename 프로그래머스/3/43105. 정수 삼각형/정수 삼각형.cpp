#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> triangle) {
    int answer = 0;
    vector<vector<int>> memo;
    vector<int> start = {triangle[0][0]};
    memo.push_back(start);
    int cnt = 0;
    for(int i = 1; i < triangle.size(); i++) {
        vector<int> values;
        for(int j = 0; j < triangle[i].size(); j++) {
            if(j == 0) values.push_back(memo[cnt][j] + triangle[i][j]);
            else if(j == triangle[i].size() - 1) {
                values.push_back(memo[cnt][j - 1] + triangle[i][j]);
            } else{
                values.push_back(max(memo[cnt][j - 1] + triangle[i][j], memo[cnt][j] + triangle[i][j]));
            }
        }
        memo.push_back(values);
        cnt++;
    }
    for(int i = 0; i < memo[memo.size() - 1].size(); i++) {
        if(answer < memo[memo.size() - 1][i]) answer = memo[memo.size() - 1][i];
    }
    return answer;
}