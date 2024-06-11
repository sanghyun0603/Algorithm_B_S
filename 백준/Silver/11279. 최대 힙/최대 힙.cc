#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    priority_queue<int, vector<int>> pq;
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