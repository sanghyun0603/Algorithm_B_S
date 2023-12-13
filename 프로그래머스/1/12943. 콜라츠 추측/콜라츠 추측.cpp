#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long nums = num;
    while(nums != 1) {
        if(nums % 2 == 0) nums = nums / 2;
        else nums = nums * 3 + 1;
        answer++;
        if(answer > 500) return -1;
    }
    return answer;
}