#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int piz = 6;
    while(piz%n != 0) {
        piz += 6;
    }
    return piz/6;
}