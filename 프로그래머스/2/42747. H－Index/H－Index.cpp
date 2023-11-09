#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    int cnt = 0;
    int lens = citations.size();
    sort(citations.begin(),citations.end(),greater<>());
    for(int i = 0; i < lens; i++) {
        cnt ++;
        if(cnt <= citations[i]) {
            answer ++;
        }
    }
    return answer;
}