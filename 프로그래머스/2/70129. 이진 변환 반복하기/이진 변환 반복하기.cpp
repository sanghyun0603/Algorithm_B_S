#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int delZero = 0;
    int trans = 0;
    int lens = 0;
    string temp = "";
    string binary = "";
    while(s != "1") {
        trans += 1;
        temp = "";
        binary = "";
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '1') temp += s[i];
            else delZero ++;
        }
        lens = temp.length();
        while(lens > 0) {
            if(lens % 2 == 1) binary = "1" + binary;
            else binary = "0" + binary;
            lens >>= 1;
        }
        s = binary;
    }
    answer.push_back(trans);
    answer.push_back(delZero);
    return answer;
}