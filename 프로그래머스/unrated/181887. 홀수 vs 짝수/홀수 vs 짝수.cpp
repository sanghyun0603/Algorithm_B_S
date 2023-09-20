#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int even = 0;
    int odd = 0;
    for(int i = 1; i <= num_list.size(); i++) {
        if(i % 2 == 1) {
            odd += num_list[i-1];
        } else {
            even += num_list[i-1];
        }
    }
    answer = odd > even ? odd : even;
    return answer;
}