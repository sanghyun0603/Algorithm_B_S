#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int arr[10001] = {};
    int answer = 0;
    int s1 = 0, s2 = 0, s3 = 0;
    sort(sides.begin(),sides.end());
    s1 = sides[0];
    s2 = sides[1];
    int a = sides[1] - sides[0];
    int b = sides[1] + sides[0];
    for(int i = a + 1; i <= sides[1]; i++ ) {
        if(arr[i] == 0) {
            arr[i] ++;
        }
    }
    for(int i = sides[1] + 1; i < b; i++) {
        if(arr[i] == 0) {
            arr[i] ++;
        }
    }
    for(int i = 0; i < 10001; i++) {
        if(arr[i] == 1) {
            answer ++;
        }
    }
    return answer;
}