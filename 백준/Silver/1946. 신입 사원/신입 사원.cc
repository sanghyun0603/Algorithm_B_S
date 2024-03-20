#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    int n;
    int a, b, cnt;
    int select;
    cin >> t;
    for (int te = 0; te < t; te++)
    {
        cin >> n;
        cnt = 1; // 앞 1등은 무조건 뽑힘
        select = 0;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            v.push_back(make_pair(a, b));
        }
        sort(v.begin(), v.end());
        for (int i = 1; i < n; i++)
        {
            if (v[select].second > v[i].second)
            {
                cnt++;
                select = i;
                // 내 위에 등수의 다른점수의 등수보다
                // 내 등수가 높으면 뽑힌다.
                // 내 아래등수는 내 다른점수의 등수보다
                // 높아야뽑히기때문에 내윗등수의 다른점수는 볼필요없다.
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}