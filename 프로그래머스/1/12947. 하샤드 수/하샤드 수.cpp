#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int num = x;
    int sums = 0;
    while(x != 0) {
        sums += x % 10;
        x /= 10;
    }
    if(num % sums != 0) answer = false;
    return answer;
}