#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    if(sqrt(n) - (int)sqrt(n) == 0) answer = 1;
    else answer = 2;
    return answer;
}