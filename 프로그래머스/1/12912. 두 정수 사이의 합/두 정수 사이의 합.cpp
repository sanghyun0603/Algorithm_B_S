#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int les = 0;
    int maxs = 0;
    if(a==b) return a;
    else if(a>b) {
        les = b;
        maxs = a;
    } else {
        les = a;
        maxs = b;
    }
    for(int i = les; i < maxs+1; i++) {
        answer += i;
    }
    return answer;
}