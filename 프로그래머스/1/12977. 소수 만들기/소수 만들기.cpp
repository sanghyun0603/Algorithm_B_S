#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
//제일큰3개골랐을때 소수 이하 에라토스테네스채이용 구하기.
int solution(vector<int> nums) {
    int answer = 0;
    sort(nums.begin(),nums.end(),greater<>());//오름차순정렬
    int maxi = nums[0] + nums[1] + nums[2];
    int arr[3000] = {};
    int num = 0;
    for(int i = 2; i <= sqrt(maxi); i++) {
        if(!arr[i]) {
            for(int j = i * 2; j <= maxi; j += i) {
                arr[j] = 1;
            }
        }
    }
    for(int i = 0; i < nums.size() - 2; i++) {
        num = 0;
        for(int j = i + 1; j < nums.size() - 1; j++) {
            for(int k = j + 1; k < nums.size(); k++) {
                num = nums[i] + nums[j] + nums[k];
                if(!arr[num]) answer++;
            }
        }
    }

    return answer;
}