#include <iostream>
#include <stack>
#include <utility>

using namespace std;

int arr[1000001] = {};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    stack<pair<int, int>> s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (s.empty())
            s.push({arr[i], i});
        else
        {
            while (!s.empty() && s.top().first < arr[i])
            {
                arr[s.top().second] = arr[i];
                s.pop();
            }
            s.push({arr[i], i});
        }
    }
    while (!s.empty())
    {
        arr[s.top().second] = -1;
        s.pop();
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}