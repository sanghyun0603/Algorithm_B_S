#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(int n, vector<int> times) {
    long long answer = 0;
    long long st = 1;
    long long end = 1e18;
    while(st < end) {
        long long mid = (st+end)/2;
        long long cnt = 0;
        for(int i = 0; i < times.size(); i++) {
            cnt += mid/times[i];
        }
        if(cnt >= n) end = mid;
        else st = mid + 1;
    }
    return st;
}