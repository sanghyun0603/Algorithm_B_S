#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int maxs = n;
    for(int i = 2; i * i <= maxs; i++) {
        while(n % i == 0) {
            n /= i;
            if(find(answer.begin(),answer.end(),i) == answer.end()) {
                answer.push_back(i);
            }
        }
    }
    if(n != 1) {
        answer.push_back(n);
    }
    return answer;
}