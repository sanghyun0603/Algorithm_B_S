#include <iostream>

using namespace std;

int main()
{
    int t;
    int x1, x2, y1, y2, r1, r2, dis, a1, a2;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        dis = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
        a1 = (r2 - r1) * (r2 - r1);
        a2 = (r2 + r1) * (r2 + r1);
        if (dis == 0)
        {
            // 같은 점에있을때 위치가 같으면 같은 크기의 원이라 무한대
            // 아니면 겹치지 않는 원이라 0개
            if (a1 == 0)
            {
                cout << -1 << '\n';
            }
            else
                cout << 0 << '\n';
        }
        else
        {
            if (dis == a1 || dis == a2)
                cout << 1 << '\n';
            else if (dis > a1 && dis < a2)
                cout << 2 << '\n';
            else
                cout << 0 << '\n';
        }
    }

    return 0;
}