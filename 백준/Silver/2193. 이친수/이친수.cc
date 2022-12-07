#include <iostream>

using namespace std;
long long memo[91];
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    memo[1] = 1;
    memo[2] = 1;
    for (int i = 3; i <= n; i++) {
        memo[i] = memo[i - 1] + memo[i - 2];
    }
    cout << memo[n];

    return 0;
}