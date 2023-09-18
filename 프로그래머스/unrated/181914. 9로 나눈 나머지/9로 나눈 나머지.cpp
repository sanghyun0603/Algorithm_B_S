#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer = 0;
    int num = 0;
    for(int i = 0; i < number.length(); i++) {
        num += number[i] - '0';
    }
    answer = num % 9;
    return answer;
}