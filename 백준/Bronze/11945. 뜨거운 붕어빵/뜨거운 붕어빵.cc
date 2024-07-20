#include<iostream>
#include<string>

using namespace std;

int main () {
    int n,m;
    string s;
    cin >> n >> m;
    for(int i = 0 ; i < n; i++) {
        cin >> s;
        for(int j = m - 1; j > -1; j--) {
            cout << s[j];
        }
        cout << '\n';
    }
    return 0;
}