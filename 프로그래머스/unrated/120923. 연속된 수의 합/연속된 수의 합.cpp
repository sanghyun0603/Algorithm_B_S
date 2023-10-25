#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int mid = total / num;
    int start = 0;
    if(total % num == 0) start = mid - num/2;
    else start = mid - (total % num - 1);
    for(int i = start; i < start + num; i++) {
        answer.push_back(i);
    }
    return answer;
}