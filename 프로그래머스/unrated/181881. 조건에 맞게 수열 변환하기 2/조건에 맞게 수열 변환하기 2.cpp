#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    vector<int> previous = arr;
    int cnt = 0;
    while(true) {
        if(cnt > 0) {
            int flag = 0;
            for(int i = 0; i < arr.size(); i++) {
                if(arr[i] != previous[i]) {
                    break;
                }
                flag ++;
            }
            if(flag == arr.size()) {
                answer = cnt - 1;
                break;
            }
            previous = arr;
        }
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] >= 50 && arr[i] % 2 == 0) {
                arr[i] /= 2;
            } else if(arr[i] < 50 && arr[i] % 2 == 1) {
                arr[i] = arr[i] * 2 + 1;
            }
        }
        cnt ++;
    }
    return answer;
}