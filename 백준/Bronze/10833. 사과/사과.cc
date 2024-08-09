#include <iostream>

using namespace std;

int main() {
    int n;
    int schools, apples;
    int cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> schools >> apples;
        cnt += apples % schools;
    }
    cout << cnt << '\n';
    return 0;
}