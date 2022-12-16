#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
//using namespce 안쓰고하기.
int arr[100020];
int N,K;
int g_road[100020];
std::vector<int> v;
int bfs(int N)
{
    std::queue<int> q;
    q.push(N);
    arr[N] = 0;
    while(arr[K] == -1)
    {
        int x = q.front();
        q.pop();
        for (int way : {x-1,x+1,2*x}) {
            if (way >= 0 && way <= 100000 && arr[way] == -1)
            {
                g_road[way] = x;
                arr[way] = arr[x] + 1;
                q.push(way);
            }
        }
    }
    return 0;
}

int main(void)
{
    std::fill(arr,arr+100020,-1);
    std::cin >> N >> K;
    if (N == K)
    {
        std::cout << 0 << '\n';
        std::cout << N << '\n';
    }
    else
    {
        bfs(N);
        std::cout << arr[K] << '\n';
        int chase = K;
        while(N != chase)
        {
            v.push_back(g_road[chase]);
            chase = g_road[chase];
        }
        for (int i = v.size()-1; i >= 0; --i) {
            std::cout << v[i] << " ";
        }
        std::cout << K;
        std::cout << '\n';
    }
    return 0;
}