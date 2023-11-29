#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = array[0];
    for(int num : array) {
        if(abs(answer - n) > abs(num - n)) {
            answer = num;
        } else if(abs(answer - n) == abs(num - n)) {
            answer = answer > num ? num : answer;
        }
    }
    return answer;
}