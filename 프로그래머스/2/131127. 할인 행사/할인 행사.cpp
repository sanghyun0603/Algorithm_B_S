#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    map<string,int> m;
    int lens = discount.size();
    int counting = number.size();
    int st = 0;
    int cnt = 0;
    for(int i = 0; i < counting; i++) {
        m.insert({want[i], number[i]});
    }
    while(st + 10 <= lens) {
        cnt = 0;
        for(int i = st; i < st + 10; i++) {
            if(m.find(discount[i]) != m.end()) {
                m[discount[i]] -= 1;
                if(m[discount[i]] == 0) cnt++;
            }
        }
        if(counting == cnt) answer ++;
        for(int i = 0; i < counting; i++) {
            m[want[i]] = number[i];
        }
        st++;
    }
    return answer;
}