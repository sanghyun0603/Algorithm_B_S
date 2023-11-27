#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = 0;
    int coupon = 0;
    while(chicken > 9) {
        coupon = chicken/10;
        answer += coupon;
        chicken -= coupon * 10;
        chicken += coupon;
    }
    return answer;
}