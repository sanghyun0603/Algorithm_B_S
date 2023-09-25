#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int num = 1;
    while(num <= n) {
        if(num % 2 == 0) {
            answer += num;
        }
        num++;
    }
    return answer;
}