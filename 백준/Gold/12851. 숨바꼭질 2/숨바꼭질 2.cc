#include <iostream>
#include <queue>
int arr[200002];
int N,K;
int g_mini = 200003;
int g_mini_cnt = 0;

int bfs(int N)
{
    std::queue<int> q;
    q.push(N);
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        for (int way : {x-1,x+1,2*x}) {
            if (arr[way] != 0 && way >= 0 && way <= 100000)
            {
                if (way == K)
                {
                    arr[way] = arr[x] + 1;
                    if (g_mini > arr[way])
                    {
                        g_mini = arr[way];
                        g_mini_cnt = 1;
                    }
                    else if (g_mini == arr[way])
                    {
                        g_mini_cnt +=1;
                    }
                }
                else
                {
                    if (arr[way] >= arr[x] +1)
                    {
                        q.push(way);
                        arr[way] = arr[x] +1;
                    }
                }

            }
            if (way >= 0 && way <= 100000 && arr[way] == 0)
            {
                arr[way] = arr[x] + 1;
                q.push(way);
                if (way == K)
                {
                    if (g_mini > arr[way])
                    {
                        g_mini = arr[way];
                        g_mini_cnt = 1;
                    }
                }
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
        std::cout << 1 << '\n';
    }
    else
    {
        bfs(N);
        std::cout << g_mini << '\n';
        std::cout << g_mini_cnt << '\n';
    }
    return 0;
}