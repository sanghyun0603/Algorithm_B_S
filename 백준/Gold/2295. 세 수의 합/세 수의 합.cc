#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    int arr[1001] = {};
    int maxs = -2100000000;
    vector<int> someTwo;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            someTwo.push_back(arr[i] + arr[j]);
        }
    }
    sort(someTwo.begin(), someTwo.end());
    for (int i = N - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (binary_search(someTwo.begin(), someTwo.end(), arr[i] - arr[j]))
            {
                if (maxs < arr[i])
                {
                    maxs = arr[i];
                }
            }
        }
    }
    cout << maxs << '\n';
    return 0;
}