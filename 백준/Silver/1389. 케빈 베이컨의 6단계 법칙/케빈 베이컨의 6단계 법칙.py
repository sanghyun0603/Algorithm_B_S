import sys
from collections import deque
def bfs(n,cnt):
    global bacon
    visited = [0]*(N+1)
    Q = deque()
    Q.append(n)
    visited[n] = 1
    while Q:
        cnt += 1
        for _ in range(len(Q)):
            i = Q.popleft()
            for w in friend[i]:
                if visited[w]==0:
                    visited[w]=1
                    bacon += cnt
                    Q.append(w)
N,M = map(int,input().split())
friend = [[] for _ in range(N+1)]
bacon = 0
mins = 999999999
ans = 0
for _ in range(M):
    a,b = map(int, sys.stdin.readline().split())
    friend[a].append(b)
    friend[b].append(a)
for i in range(1,N+1):
    bfs(i,0)
    if mins>bacon:
        mins = bacon
        ans = i
    bacon = 0
print(ans)