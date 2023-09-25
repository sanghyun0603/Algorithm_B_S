#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int max = 0;
    int arr[1001] = {};
    for(int i = 0; i < array.size(); i++) {
        arr[array[i]] ++;
    }
    for(int i = 0; i < 1001; i++) {
        if(max < arr[i]) {
            max = arr[i];
            answer = i;
        }
    }
    int check = 0;
    for(int i = 0; i < 1001; i++) {
        if(max == arr[i]) {
            check ++;
            if(check > 1) {
                answer = -1;
                break;
            }
        }
    }
    return answer;
}