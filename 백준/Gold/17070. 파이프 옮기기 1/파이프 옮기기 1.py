def dfs(i,j,dir):
    global cnt
    if i == N-1 and j == N-1:
        cnt +=1
        return 
    if dir == 0 or dir == 2: #가로 대각선 오른쪽으로
        if j +1 <N and mat[i][j+1] != 1:
            dfs(i,j+1,0)
    if dir == 1 or dir == 2: #세로 대각선 밑으로
        if i +1 < N and mat[i+1][j] != 1:
            dfs(i+1,j,1)
    if dir == 1 or dir == 0 or dir == 2:#모든곳 대각선으로
        if i+1<N and j+1<N and mat[i+1][j+1] != 1 and mat[i][j+1] != 1 and mat[i+1][j] != 1:
            dfs(i+1,j+1,2)

N = int(input())
mat = [list(map(int,input().split())) for _ in range(N)]
# garo = [[0,1],[1,1]]
# sero = [[1,0],[1,1]]
# dae = [[1,0],[0,1],[1,1]]
cnt = 0
if mat[N-1][N-1] == 1:
    print(0)
else:
    dfs(0,1,0)
    print(cnt)