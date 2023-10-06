#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    int start = 0;
    int lens = my_str.length();
    while(start < lens - n) {
        answer.push_back(my_str.substr(start,n));
        start += n;
    }
    answer.push_back(my_str.substr(start));
    return answer;
}