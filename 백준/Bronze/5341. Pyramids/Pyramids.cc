#include<iostream>

using namespace std;

int main () {
    int n;
    int cnt = 0;
    while(true) {
        cin >> n;
        if(n == 0) break;
        for(int i = 1; i <= n; i++) {
            cnt += i;
        }
        cout << cnt << '\n';
        cnt = 0;
    }
    
    return 0;
}