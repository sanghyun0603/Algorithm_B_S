#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int leave = 0;
    int arr[101] = {};
    int maxIdx = 0;
    queue<pair<int,int>> q;
    for(int i = 0; i < priorities.size(); i++) {
        q.push(make_pair(i,priorities[i]));
        arr[priorities[i]] ++;
        if(maxIdx < priorities[i]) {
            maxIdx = priorities[i];
        }
    }
    while(true) {
        pair<int,int> temp = q.front();
        q.pop();
        for(int i = maxIdx; i > 0; i--) {
            if(arr[i] > 0 && i > temp.second) {
                q.push(temp);
                break;
            } else if (arr[i] > 0 && i == temp.second) {
                arr[i] --;
                leave ++;
                if(location == temp.first) {
                    return leave;
                }
                break;
            }
        }
    }
    
    return answer;
}