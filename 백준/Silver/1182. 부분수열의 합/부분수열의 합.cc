#include <iostream>

using namespace std;

int main()
{
    int N, S;
    int arr[20] = {};
    int temp = 0;
    int cnt = 0;
    cin >> N >> S;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < (1 << N); i++)
    {
        temp = 0;
        for (int j = 0; j < N; j++)
        {
            if (i & (1 << j))
            {
                temp += arr[j];
            }
        }
        if (temp == S)
        {
            cnt++;
        }
    }

    cout << cnt << '\n';
    return 0;
}