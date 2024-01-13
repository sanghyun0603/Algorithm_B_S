#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int sums = 0;
    int start = 0;
    for(int i = 1; i <= n; i++) {
        sums = i;
        start = i + 1;
        while(sums < n) {
            sums += start;
            start ++;
        }
        if(sums == n) {
            answer ++;
        }
    }
    return answer;
}