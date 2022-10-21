def dfs(n):
    if n == M:
        li.add(tuple(bits))
        return
    for i in range(N):
        bits[n]=N_li[i]
        dfs(n+1)


N,M = map(int,input().split())
N_li = list(map(int,input().split()))
N_li.sort()
bits = [0]*M
li = set([])
dfs(0)
li = list(li)
li.sort()
for i in range(len(li)):
    print(*li[i])