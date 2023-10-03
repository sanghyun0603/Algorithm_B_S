#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int maxs = 0;
    int idx = 0;
    for(int i = 0; i < array.size(); i++) {
        if(array[i] > maxs) {
            maxs = array[i];
            idx = i;
        }
    }
    answer.push_back(maxs);
    answer.push_back(idx);
    return answer;
}