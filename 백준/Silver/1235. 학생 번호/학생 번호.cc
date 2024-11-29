#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    int k = 0;
    string s;
    vector<string> v;
    set<string> sets;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back(s);
    }
    for (int i = v[0].length() - 1; i >= 0; i--)
    {
        sets.clear();
        for (int j = 0; j < n; j++)
        {
            string end_s = v[j].substr(i, v[j].length());
            sets.insert(end_s);
        }
        if (sets.size() == n)
        {
            k = v[0].length() - i;
            break;
        }
    }
    cout << k << '\n';

    return 0;
}