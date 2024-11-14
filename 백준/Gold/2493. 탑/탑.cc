#include <iostream>
#include <stack>
#include <utility>

using namespace std;

int arr[500001] = {};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    stack<pair<int, int>> s;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n; i > 0; i--)
    {
        if (s.empty())
            s.push({arr[i], i});
        else
        {
            while (!s.empty() && s.top().first <= arr[i])
            {
                arr[s.top().second] = i;
                s.pop();
            }
            s.push({arr[i], i});
        }
    }
    while (!s.empty())
    {
        arr[s.top().second] = 0;
        s.pop();
    }
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}