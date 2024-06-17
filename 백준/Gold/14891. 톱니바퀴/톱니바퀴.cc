#include <iostream>
#include <vector>
#include <deque>
#include <string>

using namespace std;

vector<deque<int>> gears;

void into_dq(string s)
{
    deque<int> dq;
    for (int i = 0; i < s.length(); i++)
    {
        switch (s[i])
        {
        case '1':
            dq.push_back(1);
            break;

        default:
            dq.push_back(0);
            break;
        }
    }
    gears.push_back(dq);
}

void rotat(int num, int dir)
{
    // 몇번톱니인지에 따라... 한번에 돌린다.
    int check[4] = {};
    int dirs[4] = {};
    int num_gear = num - 1;
    // 톱니 방향정하기
    dirs[num_gear] = dir;
    for (int i = num_gear; i > 0; i--)
    {
        dirs[i - 1] = -dirs[i];
    }
    for (int i = num_gear; i < 3; i++)
    {
        dirs[i + 1] = -dirs[i];
    }
    switch (num_gear)
    {
    case 0:
        check[0] = 1; // 돌림
        for (int i = 0; i < 3; i++)
        {
            if (gears[i].at(2) != gears[i + 1].at(6))
            {
                check[i + 1] = 1;
            }
            else
            {
                // 하나가안맞음 이후도 못돌림
                break;
            }
        }
        break;
    case 1:
        check[1] = 1; // 돌림
        if (gears[0].at(2) != gears[1].at(6))
            check[0] = 1;
        for (int i = 1; i < 3; i++)
        {
            if (gears[i].at(2) != gears[i + 1].at(6))
            {
                check[i + 1] = 1;
            }
            else
            {
                break;
            }
        }
        break;
    case 2:
        check[2] = 1; // 돌림
        if (gears[2].at(2) != gears[3].at(6))
            check[3] = 1;
        for (int i = 2; i > 0; i--)
        {
            if (gears[i].at(6) != gears[i - 1].at(2))
            {
                check[i - 1] = 1;
            }
            else
            {
                break;
            }
        }
        break;
    default:
        check[3] = 1;
        for (int i = 3; i > 0; i--)
        {
            if (gears[i].at(6) != gears[i - 1].at(2))
            {
                check[i - 1] = 1;
            }
            else
            {
                break;
            }
        }
        break;
    }
    // 톱니회전작업끝
    for (int i = 0; i < 4; i++)
    {
        if (check[i])
        {
            switch (dirs[i])
            {
            case 1:
            {
                int temp = gears[i].back();
                gears[i].pop_back();
                gears[i].push_front(temp);
                break;
            }

            default:
            {
                int temp = gears[i].front();
                gears[i].pop_front();
                gears[i].push_back(temp);
                break;
            }
            }
        }
    }
    return;
}

int main()
{
    int k, num, dir;
    int score = 0;
    string s;
    for (int i = 0; i < 4; i++)
    {
        cin >> s;
        into_dq(s);
    }
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        // 1~4번톱니바퀴(0~3), 방향 1 시계 -1 반시계
        cin >> num >> dir;
        rotat(num, dir);
    }
    for (int i = 0; i < 4; i++)
    {
        if (gears[i].front() == 1)
        {
            score += 1 << i;
        }
    }
    cout << score << '\n';
    return 0;
}