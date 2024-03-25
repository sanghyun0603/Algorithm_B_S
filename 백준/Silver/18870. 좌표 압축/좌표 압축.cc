#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    set<int> s;
    int arr[1000001] = {};
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        s.insert(arr[i]);
    }
    for (auto const it : s)
    {
        v.push_back(it);
    }
    for (int i = 0; i < n; i++)
    {
        cout << lower_bound(v.begin(), v.end(), arr[i]) - v.begin() << ' ';
    }
    return 0;
}