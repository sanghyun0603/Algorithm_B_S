#include <iostream>

using namespace std;

long long combi(int n, int k)
{
    if (k > n - k)
    {
        k = n - k;
    }
    long long result = 1;
    for (int i = 0; i < k; ++i)
    {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n >> m;
        cout << combi(m, n) << '\n';
    }

    return 0;
}