#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    vector <string> prefix;
    for(int i = 1; i <= my_string.length(); i++) {
        prefix.push_back(my_string.substr(0,i));
    }
    for(int i = 0; i < prefix.size(); i++) {
        if(is_prefix == prefix[i]) {
            answer = 1;
        }
    }
    return answer;
}