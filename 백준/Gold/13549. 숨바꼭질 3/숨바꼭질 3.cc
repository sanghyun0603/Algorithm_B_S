#include <iostream>
#include <deque>
#include <algorithm>
//0-1BFS 가중치가 0,1인 경우엔 다익스트라보다 훨씬 빠르다.
//1.덱의 프론트에서 현재 노드 꺼내고
//2. 인접노드 비교
//3. 현재 노드까지 소비된 비용 + 그 노드를 향하는 가중치 < 그 노드 까지 가는데 소비된 비용이면 비용 갱신
//4. 노드가 갱신된 상태에서 그 노드를 향하는 가중치가 0이면 덱 front, 아니면 덱 back,
//5. Q 빌때까지 반복
int arr[200020];
int N,K;
int bfs(int N)
{
    std::deque<int> dq;
    dq.emplace_back(N);
    arr[N] = 0;
    while(!dq.empty())
    {
        int x = dq.front();
        dq.pop_front();
        int way = x * 2;
        if ( way >=0 && way <= 100000 && arr[way] > arr[x])
        {
            arr[way] = arr[x];
            dq.emplace_front(way);
        }
        for (int way : {x-1,x+1}) {
            if ( way >=0 && way <= 100000 && arr[way] > arr[x] +1)
            {
                arr[way] = arr[x] + 1;
                dq.emplace_back(way);
            }
        }
    }


    return 0;
}

int main(void)
{
    std::fill(arr,arr + 200020, 400000);
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