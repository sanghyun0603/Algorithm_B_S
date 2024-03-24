#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N, M;
    vector<int> v;
    int target[500001] = {};
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> target[i];
        cout << upper_bound(v.begin(), v.end(), target[i]) - lower_bound(v.begin(), v.end(), target[i]) << ' ';
    }
    return 0;
}