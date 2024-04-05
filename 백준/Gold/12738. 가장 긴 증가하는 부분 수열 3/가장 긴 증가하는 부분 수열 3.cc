#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int arr[1000001] = {};
    vector<int> answer;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        if (answer.empty() || answer.back() < arr[i])
        {
            answer.push_back(arr[i]);
        }
        else if (answer.back() > arr[i])
        {
            answer[lower_bound(answer.begin(), answer.end(), arr[i]) - answer.begin()] = arr[i];
        }
    }
    cout << answer.size() << '\n';

    return 0;
}