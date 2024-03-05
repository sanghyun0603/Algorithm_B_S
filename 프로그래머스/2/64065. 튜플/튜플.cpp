#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

bool compare(const vector<int>& a, const vector<int>& b) {
    return a.size() < b.size();
}

vector<int> solution(string s) {
    vector<int> answer;
    vector<vector<int>> nums;
    vector<int> inNum;
    string num = "";
    for(int i = 2; i < s.length() - 1; i++) {
        if(s[i] == '}') {
            inNum.push_back(stoi(num));
            num = "";
            nums.push_back(inNum);
            inNum.clear();
        }
        else if(num.length() != 0 && s[i] == ','){
            inNum.push_back(stoi(num));
            num = "";
        } else if(isdigit(s[i])) {
            num += s[i];
        }
    }
    sort(nums.begin(), nums.end(), compare);
    for(int i = 0; i < nums.size(); i++) {
        for(int j = 0; j < nums[i].size(); j++) {
            if(find(answer.begin(), answer.end(),nums[i][j]) == answer.end()) {
                answer.push_back(nums[i][j]);
            }
        }
    }
    return answer;
}