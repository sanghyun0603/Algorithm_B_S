#include <iostream>
#include <queue>
//using namespce 안쓰고하기.
int arr[100002];
int N,K;
int bfs(int N)
{
    std::queue<int> q;
    q.push(N);
    while(arr[K] == 0)
    {
        int x = q.front();
        q.pop();
        for (int way : {x-1,x+1,2*x}) {
            if (way >= 0 && way <= 100000 && arr[way] == 0)
            {
                arr[way] = arr[x] + 1;
                q.push(way);
            }
        }
    }
    return 0;
}

int main(void)
{
    std::cin >> N >> K;
    if (N == K)
    {
        std::cout << 0 << '\n';
    }
    else
    {
        bfs(N);
        std::cout << arr[K] << '\n';
    }
    return 0;
}