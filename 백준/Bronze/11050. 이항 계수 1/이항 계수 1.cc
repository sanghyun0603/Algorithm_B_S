#include <iostream>

using namespace std;
 
int facto(int t) {
    int ans = 1;
    for (int i = t; i > 0; i--) {
        ans *= i;
    }
    return ans;
}
 
int main() {
    int n, k;
    cin >> n >> k;
 
    int res = facto(n) / (facto(k) * facto(n - k));
 
    cout << res;
}
