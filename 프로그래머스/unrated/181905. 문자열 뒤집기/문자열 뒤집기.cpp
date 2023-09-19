#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = "";
    int cnt = 0;
    string temp = my_string.substr(s,e - s + 1);
    reverse(temp.begin(),temp.end());
    for(int i = s; i <= e; i++) {
        my_string[i] = temp[cnt++];
    }
    return my_string;
}