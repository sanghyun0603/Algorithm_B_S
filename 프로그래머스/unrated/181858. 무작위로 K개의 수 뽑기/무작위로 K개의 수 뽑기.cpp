#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    int visited[100001] = {};
    for(int i = 0; i < arr.size(); i++) {
        if(visited[arr[i]] == 0 && answer.size() < k) {
            visited[arr[i]] = 1;
            answer.push_back(arr[i]);
        }
    }
    int a = answer.size();
    while(a < k) {
        answer.push_back(-1);
        a++;
    }
    return answer;
}