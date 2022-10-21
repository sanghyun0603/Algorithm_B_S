from collections import deque
def k_pr(n):
    return n*n+(n-1)*(n-1)
def bfs(i,j):
    global maxs
    visited = [[0]*N for _ in range(N)]
    di = [1,-1,0,0]
    dj = [0,0,1,-1]
    Q = deque([])
    Q.append((i,j))
    visited[i][j]= 1
    k = 1
    homes = home[i][j]  # 누적집 갯수
    if (homes*M) - k_pr(k)>=0:
        maxs = max(homes,maxs)
    while k <= N+1:
        leq = len(Q)
        for _ in range(leq):
            r,c = Q.popleft()
            for w in range(4):
                ni = r + di[w]
                nj = c + dj[w]
                if 0<= ni < N and 0<= nj < N and visited[ni][nj] == 0:
                    Q.append((ni,nj))
                    visited[ni][nj] = 1
                    if home[ni][nj] == 1:
                        homes += 1
        if (homes*M) - k_pr(k+1) >= 0:
            maxs = max(homes,maxs)
        k += 1


T = int(input())

for tc in range(1,T+1):
    N,M = map(int,input().split())
    home = [list(map(int,input().split())) for _ in range(N)]
    maxs = 0
    for i in range(N):
        for j in range(N):
            bfs(i,j)
    print(f'#{tc} {maxs}')