#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    int arr[1000001] = {};
    for(int i = 2; i < sqrt(n); i++) {
        if(!arr[i]) {
            for(int j = i * 2; j <= n; j += i) {
                arr[j] = 1;
            }
        }
    }
    for(int i =2; i <= n; i++) {
        if(!arr[i]) answer++;
    }
    return answer;
}