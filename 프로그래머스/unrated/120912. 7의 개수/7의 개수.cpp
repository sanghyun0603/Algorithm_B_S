#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    string s;
    for(int i = 0; i < array.size(); i++) {
        s = to_string(array[i]);
        for(int j = 0; j < s.length(); j++) {
            if(s[j] == '7') {
                answer ++;
            }
        }
    }
    return answer;
}