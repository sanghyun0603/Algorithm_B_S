#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int n, k;
    string s1, s2;
    cin >> n;
    while (n-- > 0)
    {
        int cnt = 1;
        cin >> k;
        map<string, int> m;
        for (int i = 0; i < k; i++)
        {
            cin >> s1 >> s2;
            if (m.find(s2) != m.end())
            {
                m[s2]++;
            }
            else
            {
                m.insert({s2, 1});
            }
        }
        for (const auto &it : m)
        {
            cnt *= (it.second + 1);
        }
        cout << cnt - 1 << '\n';
    }
}
// headgear 1 eye1 face1
//  3 + (3c2) + (3c3)
//  3 + 3 + 1 = 7
// 2 * 2 * 2 - 1 = 7