def dfs(check):
    global mins
    if check == len(cctv_li):
        cnt = 0
        for i in range(N):
            for j in range(M):
                if visited[i][j] == 0:
                    cnt += 1
        if mins > cnt:
            mins = cnt
        return
    cctv_number = cctv_li[check][0]
    ii = cctv_li[check][1]
    jj = cctv_li[check][2]
    if cctv_number == 1:
        for i in range(4):
            k = 1
            iii = ii
            jjj = jj
            while True:
                ni = iii +(di1[i][0]*k)
                nj = jjj +(di1[i][1]*k)
                if 0<= ni <N and 0<= nj < M and mat[ni][nj] != 6:
                    if mat[ni][nj] == 0:
                        visited[ni][nj] += 1

                else:
                    break
                k+=1
            dfs(check+1)                # 드가자
            k = 1
            iii = ii
            jjj = jj
            while True:                 # 되돌리기
                ni = iii + (di1[i][0] * k)
                nj = jjj + (di1[i][1] * k)
                if 0 <= ni < N and 0 <= nj < M and mat[ni][nj] != 6 :
                    if mat[ni][nj] == 0:
                        visited[ni][nj] -= 1
                else:
                    break
                k += 1
    elif cctv_number == 2:
        for i in range(2):
            for j in range(2):
                k = 1
                iii = ii
                jjj = jj
                while True:
                    ni = iii+di2[i][j][0]*k
                    nj = jjj+di2[i][j][1]*k
                    if 0 <= ni < N and 0 <= nj < M and mat[ni][nj] != 6 :
                        if mat[ni][nj] == 0:
                            visited[ni][nj] +=1
                    else:
                        break
                    k += 1
            dfs(check+1)
            for j in range(2):
                k = 1
                iii = ii
                jjj = jj
                while True:
                    ni = iii+di2[i][j][0]*k
                    nj = jjj+di2[i][j][1]*k
                    if 0 <= ni < N and 0 <= nj < M and mat[ni][nj] != 6 :
                        if mat[ni][nj] == 0:
                            visited[ni][nj] -=1
                    else:
                        break
                    k += 1

    elif cctv_number == 3:
        for i in range(4):
            for j in range(2):
                k = 1
                iii = ii
                jjj = jj
                while True:
                    ni = iii+di3[i][j][0]*k
                    nj = jjj+di3[i][j][1]*k
                    if 0 <= ni < N and 0 <= nj < M and mat[ni][nj] != 6:
                        if mat[ni][nj] == 0:
                            visited[ni][nj] += 1
                    else:
                        break
                    k += 1
            dfs(check+1)
            for j in range(2):
                k = 1
                iii = ii
                jjj = jj
                while True:
                    ni = iii+di3[i][j][0]*k
                    nj = jjj+di3[i][j][1]*k
                    if 0 <= ni < N and 0 <= nj < M and mat[ni][nj] != 6:
                        if mat[ni][nj] == 0:
                            visited[ni][nj] -= 1
                    else:
                        break
                    k += 1
    elif cctv_number == 4:
        for i in range(4):
            for j in range(3):
                k = 1
                iii = ii
                jjj = jj
                while True:
                    ni = iii + di4[i][j][0] * k
                    nj = jjj + di4[i][j][1] * k
                    if 0 <= ni < N and 0 <= nj < M and mat[ni][nj] != 6:
                        if mat[ni][nj] == 0:
                            visited[ni][nj] += 1
                    else:
                        break
                    k += 1
            dfs(check+1)
            for j in range(3):
                k = 1
                iii = ii
                jjj = jj
                while True:
                    ni = iii + di4[i][j][0] * k
                    nj = jjj + di4[i][j][1] * k
                    if 0 <= ni < N and 0 <= nj < M and mat[ni][nj] != 6 :
                        if mat[ni][nj] == 0:
                            visited[ni][nj] -= 1
                    else:
                        break
                    k += 1

    elif cctv_number == 5:
        for i in range(4):
            k = 1
            iii = ii
            jjj = jj
            while True:
                ni = iii + di5[i][0]*k
                nj = jjj + di5[i][1]*k
                if 0 <= ni < N and 0 <= nj < M and mat[ni][nj] != 6:
                    if mat[ni][nj] == 0:
                        visited[ni][nj] +=1
                else:
                    break
                k += 1
        dfs(check+1)
        for i in range(4):
            k = 1
            iii = ii
            jjj = jj
            while True:
                ni = iii + di5[i][0]*k
                nj = jjj + di5[i][1]*k
                if 0 <= ni < N and 0 <= nj < M and mat[ni][nj] != 6:
                    if mat[ni][nj] == 0:
                        visited[ni][nj] -= 1
                else:
                    break
                k += 1

#1~5번 가능한 탐색방향.
di1 = [[1,0],[-1,0],[0,1],[0,-1]]
di2 = [[[0,-1],[0,1]],[[1,0],[-1,0]]]# 좌우 위아래
di3 = [[[0,1],[-1,0]],[[0,1],[1,0]],[[1,0],[0,-1]],[[0,-1],[-1,0]]]# 위우 우하 하좌 좌상
di4 = [[[-1,0],[0,-1],[0,1]], [[-1,0],[0,1],[1,0]], [[0,-1],[0,1],[1,0]], [[-1,0],[1,0],[0,-1]]]
# 상좌우 상우하 좌우하 상하좌
di5 = [[1,0],[-1,0],[0,1],[0,-1]]#하상우좌

N, M = map(int,input().split())
mat = [list(map(int,input().split())) for _ in range(N)]
cctv_li = []
mins = 10**6
visited = [[0]*M for _ in range(N)]
for i in range(N):
    for j in range(M):
        if mat[i][j] == 1 or mat[i][j] == 2 or mat[i][j] == 3 or mat[i][j] == 4 or mat[i][j] == 5:
            cctv_li.append([mat[i][j],i,j])
            visited[i][j] = 10
        elif mat[i][j] ==6:
            visited[i][j] = 20
dfs(0) # cctv체크
print(mins)