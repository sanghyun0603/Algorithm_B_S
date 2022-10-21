def clean(r,c,dire):
    global cnt
    if mat[r][c] == 0 and visited[r][c] ==0:
        cnt += 1
        visited[r][c] = 1
    k = 1
    while True:
        dir = (dire+k)%4
        ni = r + di[dir]
        nj = c + dj[dir]
        if mat[ni][nj] == 0 and visited[ni][nj] == 0:
            clean(ni,nj,dir)
            break
        ni -= di[dir]
        nj -= dj[dir]
        k += 1
        if k == 5:
            if dire == 0:
                r +=1
                if mat[r][c] == 1:
                    break
                k = 1
            elif dire == 1:
                c += 1
                if mat[r][c] == 1:
                    break
                k=1
            elif dire == 2:
                r -= 1
                if mat[r][c] == 1:
                    break
                k=1
            elif dire == 3:
                c -= 1
                if mat[r][c] == 1:
                    break
                k=1




N,M = map(int,input().split())
s_i,s_j,dir = map(int,input().split())
mat = [list(map(int,input().split())) for _ in range(N)]
di = [-1,0,1,0]# 탐색을 북서남동
dj = [0,-1,0,1]
cnt = 0
visited = [[0]*M for _ in range(N)]
if dir ==1:
    dir = 3
elif dir == 3:
    dir = 1
clean(s_i,s_j,dir)
print(cnt)