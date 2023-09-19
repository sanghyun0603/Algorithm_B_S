#include <string>
#include <vector>
#include <cctype>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52);
    for(int i = 0; i < my_string.length(); i++) {
        int idx = 0;
        if(isupper(my_string[i])) {
            idx = my_string[i] - '0' - 17;
            
        } else {
            idx = my_string[i] - '0' - 23;
        }
        answer[idx] += 1;
        
    }
    return answer;
}