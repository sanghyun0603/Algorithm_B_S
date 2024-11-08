#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    string b;
    int cnt = 0;
    int result = 51;
    cin >> a >> b;
    int a_len = a.length();
    int b_len = b.length();
    for (int i = 0; i <= b_len - a_len; i++)
    {
        cnt = 0;
        for (int j = 0; j < a_len; j++)
        {
            if (a[j] != b[i + j])
                cnt++;
        }
        if (result > cnt)
            result = cnt;
    }
    cout << result << '\n';

    return 0;
}