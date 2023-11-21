#include <string>
#include <vector>

using namespace std;

int tar = 0;

void dfs(vector<int>& numbers, int cnt, int size, int target, int sums) {
    if(cnt == size) {
        if(sums == target) tar ++;
        return;
    }
    dfs(numbers,cnt + 1, size, target, sums + numbers[cnt]);
    dfs(numbers,cnt + 1, size, target, sums - numbers[cnt]);
    
}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    dfs(numbers,0,numbers.size(),target,0);
    return tar;
}