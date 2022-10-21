def dfs(n):
    if len(num_li) == M:
        num_li.sort()
        print(*num_li)
        return
    for i in range(n,N):
        if visited[i] != 0:
            continue
        visited[i] = 1
        num_li.append(i+1)
        dfs(i)
        num_li.pop()
        visited[i] = 0

N , M = map(int,input().split())
visited = [0]*N
num_li = []
dfs(0)