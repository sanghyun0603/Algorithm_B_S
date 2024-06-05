#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string,string, greater<string>> m;
    int n;
    cin >> n;
    string name, status;
    for(int i = 0; i < n; i++) {
        cin >> name >> status;
        if(m.find(name) != m.end()) {
            m[name] = status;
        } else {
             m.insert({name,status});
        }
    }
    for(const auto& iter : m) {
        if(iter.second == "enter") cout << iter.first << '\n';
    }
    return 0;
}