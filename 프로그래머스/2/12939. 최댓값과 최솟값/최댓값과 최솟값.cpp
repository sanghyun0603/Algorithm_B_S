#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
    string a = "";
    vector<int> nums;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ' ') {
            nums.push_back(stoi(a));
            a = "";
        } else {
            a += s[i];
        }
    }
    nums.push_back(stoi(a));
    sort(nums.begin(),nums.end());
    answer += to_string(nums[0]) + ' ';
    answer += to_string(nums[nums.size() -1]);
    return answer;
}