import sys
sys.stdin = open('input.txt')
def dfs(i,j):
    di = [0,-1,1,0]
    dj = [-1,0,0,1]
    if maze[i][j] == 3:
        return 1
    else:
        visited[i][j] = 1
        for k in range(4):
            ni,nj = i+di[k],j+dj[k]
            if (0<= ni<N)and (0<= nj<N) and maze[ni][nj] != 1 and visited[ni][nj] == 0:
                dest = dfs(ni,nj)
                if dest == 1:
                    return 1
        visited[ni][nj]= 0
        return 0
for _ in range(1,11):
    T = int(input())
    N =100
    maze = [list(map(int,input())) for _ in range(N)]
    visited = [[0]*N for _ in range(N)]
    si=sj=-1
    for i in range(N):
        for j in range(N):
            if maze[i][j] == 2:
                si,sj = i,j
        if si != -1:
            break
    print(f'#{T} {dfs(si,sj)}')