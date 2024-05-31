#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<char> words;

int Ismoem(char a)
{
    switch (a)
    {
    case 'i':
        return 1;
        break;
    case 'a':
        return 1;
        break;
    case 'e':
        return 1;
        break;
    case 'o':
        return 1;
        break;
    case 'u':
        return 1;
        break;
    default:
        return 0;
    }
}

void bruteforce(int L, int C, int lens, string s)
{
    if (s.length() == L)
    {
        int cnt1 = 0;
        int cnt2 = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (Ismoem(s[i]))
                cnt1++;
            else
                cnt2++;
        }
        if (cnt1 >= 1 && cnt2 >= 2)
        {
            cout << s << '\n';
        }

        return;
    }
    for (int i = lens; i < C; i++)
    {
        if (s.find(words[i]) == string::npos)
        {
            bruteforce(L, C, i + 1, s + words[i]);
        }
    }
}

int main()
{
    int L, C;
    string s = "";
    cin >> L >> C;
    for (int i = 0; i < C; i++)
    {
        char a;
        cin >> a;
        words.push_back(a);
    }
    sort(words.begin(), words.end());
    bruteforce(L, C, 0, s);
    return 0;
}