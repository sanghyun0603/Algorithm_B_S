#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    int lens1 = arr1.size();
    int lens2 = arr2.size();
    if(lens1 == lens2) {
        int arr1sum = 0;
        int arr2sum = 0;
        for(int i = 0; i < lens1; i++) {
            arr1sum += arr1[i];
            arr2sum += arr2[i];
        }
        if(arr1sum > arr2sum) {
            answer = 1;
        } else if(arr1sum < arr2sum) {
            answer = -1;
        }
    } else {
        if(lens1 > lens2) {
            answer = 1;
        } else if(lens1 < lens2) {
            answer = -1;
        }
    }
    return answer;
}