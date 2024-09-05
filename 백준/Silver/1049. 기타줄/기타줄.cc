#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, d, p;
    vector<int> das;
    vector<int> piece;
    int price;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> d >> p;
        das.push_back(d);
        piece.push_back(p);
    }
    sort(das.begin(), das.end());
    sort(piece.begin(), piece.end());
    if (das[0] > piece[0] * 6)
    {
        price = piece[0] * n;
    }
    else
    {
        price = (das[0] * (n / 6)) + (das[0] > piece[0] * (n % 6) ? piece[0] * (n % 6) : das[0]);
    }

    cout << price << '\n';
    return 0;
}