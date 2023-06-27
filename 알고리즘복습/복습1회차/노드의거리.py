def bfs(s):
    visited = [-1]*(V+1)
    q = []
    q.append(s)
    visited[s] = 0
    while q:
        v = q.pop(0)
        if v == G:
            return visited[v]
        for w in adj_list[v]:
            if visited[w] == -1:
                q.append(w)
                visited[w] = visited[v]+1
T = int(input())
for tc in range(1,T+1):
    V , E = map(int,input().split())
    adj_list = [[] for _ in range(V+1)]
    for i in range(E):
        a,b = map(int,input().split())
        adj_list[a].append(b)
        adj_list[b].append(a)
    S,G = map(int,input().split())
    a = bfs(S)
    if a == None:
        a = 0
    print(f'#{tc} {a}')
