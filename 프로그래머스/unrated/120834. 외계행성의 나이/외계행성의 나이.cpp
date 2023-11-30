#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string a = to_string(age);
    for(auto s : a) {
        answer += (s + 49);
    }
    return answer;
}