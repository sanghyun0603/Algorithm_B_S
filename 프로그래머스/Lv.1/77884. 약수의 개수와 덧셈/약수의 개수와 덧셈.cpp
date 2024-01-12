#include <string>
#include <vector>

using namespace std;

int yeok(int a) {
    int cnt = 0;
    for(int i = 1; i <= a; i++) {
        if(a % i == 0) {
            cnt ++;
        }
    }
    return cnt;
}

int solution(int left, int right) {
    int answer = 0;
    for(int i = left; i <= right; i++) {
        if(yeok(i) % 2 == 0) {
            answer += i;
        } else {
            answer -= i;
        }
    }
    return answer;
}