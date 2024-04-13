#include <iostream>

#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, N, M;
    unordered_map<int, int> m;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        m.clear();
        int num;
        cin >> N;
        for (int i = 0; i < N; i++)
        {

            cin >> num;
            m.insert({num, 0});
        }
        cin >> M;
        for (int i = 0; i < M; i++)
        {
            cin >> num;
            if (m.find(num) != m.end())
            {
                cout << 1 << '\n';
            }
            else
                cout << 0 << '\n';
        }
    }

    return 0;
}