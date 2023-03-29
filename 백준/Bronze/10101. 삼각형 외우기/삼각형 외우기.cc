#include<iostream>
using namespace std;

int main () {
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a == 60 && b == 60 && c == 60) {
        cout << "Equilateral" << '\n';
    } else if (a+b+c == 180 && (a == b || a == c || b == c)) {
        cout << "Isosceles" << '\n';
    } else if (a+b+c == 180) {
        cout << "Scalene" << '\n';
    } else {
        cout << "Error" << '\n';
    }
}