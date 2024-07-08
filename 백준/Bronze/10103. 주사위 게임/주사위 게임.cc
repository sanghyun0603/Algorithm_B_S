#include <iostream>

using namespace std;

int main () {
    int n;
    int x = 100;
    int y = 100;
    int a, b;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        if(a > b) y -= a;
        else if(a < b) x -= b;
    }
    cout << x << '\n' << y << '\n';
    return 0;
}