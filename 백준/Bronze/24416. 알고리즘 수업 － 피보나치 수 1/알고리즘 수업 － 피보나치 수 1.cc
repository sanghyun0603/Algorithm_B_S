#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr1[51] = {};
    int arr2[51] = {};
    arr1[1] = 1;
    arr1[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        arr1[i] = arr1[i - 1] + arr1[i - 2];
    }
    for (int i = 3; i <= n; i++)
    {
        arr2[i] = i - 2;
    }
    cout << arr1[n] << ' ' << arr2[n] << '\n';
    return 0;
}
// n이
// 1 , 2, 3, 4, 5
// 1 , 1, 2, 4, 5
// dp방식
// 1, 2, 3, 4, 5, 6
// 0, 0, 1, 2, 3, 4