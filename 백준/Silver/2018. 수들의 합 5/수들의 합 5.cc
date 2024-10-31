#include <iostream>

using namespace std;

int main()
{
    int n;
    int left = 1, right = 1;
    int num = 0;
    int cnt = 0;
    cin >> n;
    while (left <= right && right <= n + 1 && left <= n)
    {
        if (num < n)
        {

            num += right;
            right++;
        }
        else if (num > n)
        {
            num -= left;
            left++;
        }
        else
        {
            cnt++;
            num -= left;
            left++;
        }
    }
    cout << cnt;

    return 0;
}