#include <iostream>

using namespace std;

int main()
{
    long long s = 0;
    long long somes = 0;
    int n = 1;
    int cnt = 0;
    cin >> s;
    while (somes != s)
    {
        if (somes < s)
        {
            somes += n;
            cnt++;
            n++;
        }
        else if (somes > s)
        {
            cnt--;
            break;
        }
    }
    cout << cnt << '\n';

    return 0;
}