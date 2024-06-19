#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string arr[10001] = {};

string fibo(string s1, string s2)
{
    int num = 0;
    int next_num = 0;
    string res = "";
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    s1.length() < s2.length() ? s1.append(s2.length() - s1.length(), '0') : s2.append(s1.length() - s2.length(), '0');
    // 자릿수 맞춰주기
    for (int i = 0; i < s1.length(); i++)
    {
        num = ((s1[i] - '0') + (s2[i] - '0') + next_num) % 10;
        res += to_string(num);
        next_num = ((s1[i] - '0') + (s2[i] - '0') + next_num) / 10;
        // num은 1의자리수를 더해주고
        // next_num은 다음 계산할때 사용할 넘김수
    }
    if (next_num != 0)
        res += to_string(next_num);
    // 마지막 넘김수가있는경우도 고려해야함
    reverse(res.begin(), res.end());
    return res;
}

int main()
{
    int n;
    cin >> n;
    arr[0] = '0';
    arr[1] = '1';
    for (int i = 2; i <= n; i++)
    {
        arr[i] = fibo(arr[i - 1], arr[i - 2]);
    }
    cout << arr[n] << '\n';
    return 0;
}