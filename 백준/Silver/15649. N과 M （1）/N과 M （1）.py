def dfs():
    if len(num_li) == M:
        print(*num_li)
        return
    for i in range(N):
        if visited[i] != 0:
            continue
        visited[i] = 1
        num_li.append(i+1)
        dfs()
        num_li.pop()
        visited[i] = 0
N , M = map(int,input().split())
visited = [0]*N             # 방문표시
num_li = []                 # 조합 담을 리스트
dfs()