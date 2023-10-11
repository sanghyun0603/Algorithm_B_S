#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int nowWei = 0;
    int time = 0;
    int nowTru = 0;
    int truckIdx = 0;
    queue<pair<int,int>> q;
    while(true) {
        time ++;
        if(!q.empty() && q.front().second <= time) {
            int popTruck = q.front().first;
            q.pop();
            nowWei -= popTruck;
        }
        if(nowWei + truck_weights[truckIdx] <= weight && q.size() <= bridge_length && truckIdx < truck_weights.size()) {
            q.push(make_pair(truck_weights[truckIdx],time + bridge_length));
            nowWei += truck_weights[truckIdx];
            truckIdx ++;
        } 
        if(q.empty()) {
            break;
        }
        
    }
    return time;
}