#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer;
    int lens = arr.size();
    if(lens % 2 == 0) {
        for(int i =1; i < lens; i += 2) {
            arr[i] += n;
        }
    } else {
        for(int i = 0; i < lens; i += 2) {
            arr[i] += n;
        }
    }
    return arr;
}