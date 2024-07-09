#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt = 0;
    while(s.length() > 1)
    {
        int sums = 0;
        for(int i = 0; i < s.length(); i++)
        {
            sums += s[i] - '0';
        }
        s = to_string(sums);
        cnt++;
    }

    cout << cnt << "\n";
    if(stoi(s) % 3 == 0)
        cout << "YES";
    else
        cout << "NO";
}