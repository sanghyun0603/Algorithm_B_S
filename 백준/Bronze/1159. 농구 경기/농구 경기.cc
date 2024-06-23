#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int n;
    string s;
    string res = "";
    map<char,int> m;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s;
        if(m.find(s[0]) != m.end()) {
            m[s[0]] ++;
        } else {
            m.insert({s[0],1});
        }
    }
    for(const auto& it : m) {
        if(it.second >= 5) {
            res += it.first;
        }
    }
    if(res == "") cout << "PREDAJA" << '\n';
    else cout << res << '\n';
    
    
    return 0;
}