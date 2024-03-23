#include <iostream>
#include <string>

using namespace std;

int main () {
    string s;
    int N;
    cin >> N;
    cin.ignore();
    for (int i = 0; i < N; i++) {
        getline(cin, s);
        cout << to_string(i + 1) << ". " << s << "\n";
    }
}