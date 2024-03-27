#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int distance, vector<int> rocks, int n) {
    int answer = 0;
    int st = 0;
    int end = distance;
    int cnt = 0;
    int pr_rock = 0;
    sort(rocks.begin(),rocks.end());
    while(st <= end) {
        cnt = 0;
        pr_rock = 0;
        int mid = (st + end) / 2;
        for(int i = 0; i < rocks.size(); i++) {
            if(mid > rocks[i] - pr_rock) {
                cnt ++;
            } else {
                pr_rock = rocks[i];
            }
        }
        if(distance - pr_rock < mid) cnt ++;
        if(cnt > n) end = mid - 1;
            else {
                st = mid + 1;
                answer = mid;
            }
    }
    return answer;
}