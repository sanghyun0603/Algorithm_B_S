#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(int i = 0; i < my_string.length(); i++) {
        if(isupper(my_string[i])) {
            my_string[i] += 32;
        }
    }
    sort(my_string.begin(),my_string.end());
    return my_string;
}