#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
// 우선순위큐의 compare는 sort때와는 다름
// compare 함수로 직접적인 비교가아니라
// struct 내의 operator! 함수를 만들어 사용

struct compare
{
    bool operator()(int a, int b)
    {
        int absa = abs(a);
        int absb = abs(b);
        if (absa == absb)
        {
            return a > b;
        }
        else
        {
            return absa > absb;
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    priority_queue<int, vector<int>, compare> pq;
    int n;
    int inputs;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> inputs;
        switch (inputs)
        {
        case 0:
            if (pq.empty())
                cout << 0 << '\n';
            else
            {
                cout << pq.top() << '\n';
                pq.pop();
            }
            break;

        default:
            pq.push(inputs);
            break;
        }
    }
    return 0;
}