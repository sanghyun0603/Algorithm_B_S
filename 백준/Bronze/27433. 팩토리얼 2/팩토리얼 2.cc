#include <iostream>

using namespace std;

int main () {
    int n;
    long long res = 1;
    cin >> n;
    if(n==0) cout << 1 << '\n';
    else {
        for(int i = 1; i <= n; i++) {
            res *= i;
        }
        cout << res << '\n';
    }
    return 0;
}