from collections import deque
def bfs(bits):
    Q = deque([])
    for i in bits:
        mat[i[0]][i[1]] = 1
    for k in virues:
        Q.append((k[0],k[1]))
    while Q:
        ii,jj = Q.popleft()
        for w in range(4):
            ni = ii + di[w]
            nj = jj + dj[w]
            if 0<=ni<N and 0<=nj<M and mat[ni][nj] == 0:
                mat[ni][nj] = 3
                Q.append((ni,nj))
    cnt = 0
    for i in range(N):
        for j in range(M):
            if mat[i][j] == 0:
                cnt += 1
            elif mat[i][j] == 3:
                mat[i][j] = 0
    for i in bits:
        mat[i[0]][i[1]] = 0
    return cnt

def jo(n,a):
    global maxs
    if n == 3:
        ma = bfs(bits)
        if maxs<ma:
            maxs =ma
        return

    for i in range(a,len(bincan)):
        if visited[i] == 0:
            visited[i] =1
            bits.append(bincan[i])
            jo(n+1,i+1)
            bits.pop()
            visited[i]=0

N,M = map(int,input().split())
mat = [list(map(int,input().split())) for _ in range(N)]
bincan = []
virues = []
di = [1,-1,0,0]
dj = [0,0,1,-1]
maxs = 0
for i in range(N):
    for j in range(M):
        if mat[i][j] == 0:
            bincan.append([i,j])
        elif mat[i][j] == 2:
            virues.append([i,j])
visited = [0]* len(bincan)
bits = []
jo(0,0)
print(maxs)