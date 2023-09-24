#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    vector<pair<int,int>> arr;
    pair<int,int> bi;
    for(int i = 0; i < rank.size(); i++) {
        if(attendance[i]) {
            bi = make_pair(rank[i],i);
            arr.push_back(bi);
        }
    }
    sort(arr.begin(),arr.end());
    arr.erase(arr.begin() + 2, arr.end());
    answer = (10000 * arr[0].second) + (100 * arr[1].second) + arr[2].second;
    return answer;
}