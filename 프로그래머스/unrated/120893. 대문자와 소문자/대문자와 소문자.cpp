#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(int i = 0; i < my_string.length(); i++) {
        if(isupper(my_string[i])) {
            my_string[i] += 32;
        } else {
            my_string[i] -= 32;
        }
    }
    return my_string;
}