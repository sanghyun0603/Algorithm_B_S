#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<string> v;
    string s;
    string s1, s2, s3;
    int sli1 = 1;
    int sli2 = sli1 + 1;
    cin >> s;
    int s_len = s.length();
    // 세개로 쪼갬

    while (sli1 < s_len - 1)
    {
        while (sli2 < s_len)
        {
            s1 = s.substr(0, sli1);
            s2 = s.substr(sli1, sli2 - sli1);
            s3 = s.substr(sli2);
            reverse(s1.begin(), s1.end());
            reverse(s2.begin(), s2.end());
            reverse(s3.begin(), s3.end());
            v.push_back(s1 + s2 + s3);
            // cout << s1 << '\n'
            //      << s2 << '\n'
            //      << s3 << '\n';
            sli2++;
        }
        sli1++;
        sli2 = sli1 + 1;
    }
    sort(v.begin(), v.end());
    cout << v[0] << '\n';

    return 0;
}