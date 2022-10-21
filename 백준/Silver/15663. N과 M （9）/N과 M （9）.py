def dfs(n):
    if n == M:
        li.add(tuple(bits))
        return
    for i in range(N):
        if visited[i] == 0:
            visited[i] = 1
            bits[n]=N_li[i]
            dfs(n+1)
            visited[i] = 0


N,M = map(int,input().split())
N_li = list(map(int,input().split()))
N_li.sort()
visited = [0]*N
bits = [0]*M
li = set([])
dfs(0)
li = list(li)
li.sort()
for i in range(len(li)):
    print(*li[i])