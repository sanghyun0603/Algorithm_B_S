#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
 
int main()
{
    string s;
    int zero = 0 , one = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != s[i + 1])
        {
            if (s[i] == '0')
                zero++;
            else
                one++;
        }
    }
 
    cout << min(zero, one);
 
}