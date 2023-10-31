#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    int facto = 0;
    while(true) {
        if(answer * (facto + 1) > n) break;
        answer *= ++facto;
    }
    return facto;
}