#include <iostream>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    map<string, pair<int, long long>> m = {{"black", {0, 1}}, {"brown", {1, 10}}, {"red", {2, 100}}, {"orange", {3, 1000}}, {"yellow", {4, 10000}}, {"green", {5, 100000}}, {"blue", {6, 1000000}}, {"violet", {7, 10000000}}, {"grey", {8, 100000000}}, {"white", {9, 1000000000}}};
    string a, b, c;
    cin >> a >> b >> c;
    long long answer = ((m[a].first * 10) + m[b].first) * m[c].second;
    cout << answer << '\n';
    return 0;
}