#include <string>
#include <vector>
#include <map>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    string snum = "";
    string num = "";
    map<string,string> m = {{"zero","0"},{"one","1"},{"two","2"},{"three","3"},{"four","4"},{"five","5"},{"six","6"},{"seven","7"},{"eight","8"},{"nine","9"}};
    for(int i = 0; i < numbers.length(); i++) {
        snum += numbers[i];
        if(m.find(snum) != m.end()) {
            num += m[snum];
            snum = "";
        }
    }
    answer = stoll(num);
    return answer;
}