#include <iostream>
#include <vector>

using namespace std;

int N, S;
int res = 0;
// 백트래킹으로 해보자
//  매번가면서 백하기.
void bruteforce(int cnt, int sums, vector<int> &v)
{
    if (cnt == N)
        return;
    if (sums + v[cnt] == S)
    {
        res++;
    }
    bruteforce(cnt + 1, sums, v);
    bruteforce(cnt + 1, sums + v[cnt], v);
}

int main()
{
    int n;
    vector<int> v;
    cin >> N >> S;
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        v.push_back(n);
    }
    bruteforce(0, 0, v);
    cout << res << '\n';
    return 0;
}