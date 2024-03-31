#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int N;
    vector<int> solutions;
    pair<int, int> answer;
    int maxs = 2100000000;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        solutions.push_back(n);
    }
    sort(solutions.begin(), solutions.end());
    // 기존풀이문제점
    // 용액이 똑같은게 두개가 선택이되버린다.
    // mid값을구할때 그부분을 제외하고...해야함
    for (int i = 0; i < N; i++)
    {
        int st = 0;
        int end = N - 1;
        while (st <= end)
        {
            int mid = (st + end) / 2;
            int sums = abs(0 - (solutions[i] + solutions[mid]));
            if (sums <= maxs && i != mid) // 조건추가
            {
                maxs = sums;
                answer = make_pair(solutions[i], solutions[mid]);
            }
            if (abs(0 - (solutions[i] + solutions[mid - 1])) <= abs(0 - (solutions[i] + solutions[mid + 1])))
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
    }
    if (answer.first > answer.second)
    {
        swap(answer.first, answer.second);
    }
    cout << answer.first << ' ' << answer.second << '\n';

    return 0;
}