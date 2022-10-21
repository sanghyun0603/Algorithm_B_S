import sys
sys.setrecursionlimit(10**6)
def dfs(n):
    if visited[n] == 1:
        return
    visited[n] = 1
    for w in adj[n]:
        if visited[w] ==0:
            dfs(w)
N,M= map(int,input().split())
adj = [[] for _ in range(N+1)]
for _ in range(M):
    a,b = map(int, sys.stdin.readline().split())
    adj[a].append(b)
    adj[b].append(a)
visited = [0]*(N+1)
cnt = 0
#dfs 쇼부보자
for i in range(1,N+1):
    if visited[i] == 0:
        dfs(i)
        cnt +=1
print(cnt)