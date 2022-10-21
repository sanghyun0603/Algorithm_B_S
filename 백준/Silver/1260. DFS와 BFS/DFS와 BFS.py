from collections import deque
def dfs(v):
    visited[v] = 1
    print(v,end=' ')
    for w in arr[v]:
        if visited[w] ==0:
            dfs(w)
def bfs():
    visit = [0]*(N+1)
    Q = deque([])
    Q.append(V)
    visit[V] = 1
    while Q:
        n = Q.popleft()
        print(n,end=' ')
        for w in arr[n]:
            if visit[w] == 0:
                visit[w] =1
                Q.append(w)
N,M,V = map(int,input().split())
num_li = [list(map(int,input().split())) for _ in range(M)]
arr = [[] for _ in range(N+1)]
visited = [0]*(N+1)
for i in num_li:
    arr[i[0]].append(i[1])
    arr[i[1]].append(i[0])
for i in range(len(arr)):
    arr[i].sort()
dfs(V)
print()
bfs()