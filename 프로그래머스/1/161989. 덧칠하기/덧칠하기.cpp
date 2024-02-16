#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(cnt < section.size() && i == section[cnt]) {
            answer++;
            cnt++;
            while(true) {
                if(section[cnt] <= m + i - 1 && cnt < section.size()) {
                    cnt++;
                } else break;
            }
        }
    }
    return answer;
}