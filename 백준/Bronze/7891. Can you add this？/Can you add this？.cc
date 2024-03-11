#include<iostream>
using namespace std;

int main () {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        long long a;
        long long b;
        cin >> a >> b;
        cout << a+b << '\n';
    }
    return 0;
}