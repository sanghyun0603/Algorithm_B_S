#include <vector>
#include <map>
// #include <set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int cnt = nums.size() / 2;
    map<int,int> poke;
    // set<int> s(nums.begin(),nums.end());
    for(int i = 0; i < nums.size(); i++) {
        if(poke.find(nums[i]) != poke.end()) {
            poke[nums[i]] ++;
        } else {
            poke[nums[i]] = 1;
        }
    }
    // for(set<int>::iterator iter = s.begin(); iter != s.end(); iter++) {
    //     answer = *iter;
    // }
    int rcn = poke.size();
    if(cnt < rcn) answer = cnt;
    else answer = rcn;
    return answer;
}