#include <iostream>

using namespace std;

int main()
{
    int balls[101] = {};
    int n, m;
    int swap1, swap2;
    int temp;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        balls[i] = i;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> swap1 >> swap2;
        temp = balls[swap1];
        balls[swap1] = balls[swap2];
        balls[swap2] = temp;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << balls[i] << ' ';
    }

    return 0;
}