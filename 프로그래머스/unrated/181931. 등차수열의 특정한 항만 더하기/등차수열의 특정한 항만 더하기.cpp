#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    answer += included[0] ? a : 0;
    for(int i = 1; i < included.size(); i++) {
        a += d;
        answer += included[i] ? a : 0;
    }
    return answer;
}