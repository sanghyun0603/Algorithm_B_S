#include <iostream>
#include <vector>

using namespace std;

vector<int> v;
int visited[10] = {};

void backtrack(int n, int m)
{
    if (v.size() == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << v[i] << ' ';
        }
        cout << '\n';
    }
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 1)
            continue;
        visited[i] = 1;
        v.push_back(i);
        backtrack(n, m);
        visited[i] = 0;
        v.pop_back();
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    backtrack(n, m);

    return 0;
}