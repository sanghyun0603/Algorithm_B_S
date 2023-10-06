#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    int cnt = 1;
    int tos = 0;
    int lens = numbers.size();
    while(cnt < k) {
        if(tos + 2 < lens) {
            tos += 2;
        } else {
            tos = (tos + 2) % lens;
        }
        cnt ++;
    }
    answer = numbers[tos];
    return answer;
}