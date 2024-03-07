#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int solution(int N, int number) {
    int answer = -1;
    unordered_set<int> dp[8];
    int num = 0;
    for(int i = 0; i < 8; i++) {
        num = num * 10 + N;
        dp[i].insert(num);
    }
    for(int i = 1; i < 8; i++) {
        for(int j = 0; j < i; j++) {
            for(auto a : dp[j]) {
                for(auto b : dp[i-j-1]) {
                    dp[i].insert(a+b);
                    if(a-b > 0) dp[i].insert(a-b);
                    dp[i].insert(a*b);
                    if(b != 0) dp[i].insert(a/b);
                }
            }
        }
    }
    for(int i = 0; i < 8; i++) {
        if(dp[i].find(number) != dp[i].end()) {
            answer = i+1;
            break;
        }
    }
    return answer;
}