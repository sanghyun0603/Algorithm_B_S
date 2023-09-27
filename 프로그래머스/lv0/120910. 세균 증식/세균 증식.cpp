#include <string>
#include <vector>

using namespace std;

int solution(int n, int t) {
    int answer = 0;
    answer = n;
    while(t > 0) {
        t--;
        answer *= 2;
    }
    return answer;
}