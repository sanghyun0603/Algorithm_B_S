#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int last = num_list.size() - 1;
    for(int i = 0; i < num_list.size(); i++) {
        answer.push_back(num_list[i]);
    }
    if(num_list[last] > num_list[last - 1]) {
        answer.push_back(num_list[last] - num_list[last-1]);
    } else {
        answer.push_back(num_list[last] * 2);
    }
    return answer;
}