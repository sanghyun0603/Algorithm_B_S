def munji():
    temp_li = [[0]*M for _ in range(N)]
    for i in range(N):
        for j in range(M):
            if mat[i][j] !=0 and mat[i][j] != -1:
                cnt = 0
                for w in range(4):
                    ni = i + di[w]
                    nj = j + dj[w]
                    val = mat[i][j]//5
                    if 0<= ni<N and 0<= nj<M and mat[ni][nj] != -1:
                        temp_li[ni][nj] += val
                        cnt += 1
                mat[i][j] -= (val*cnt)
    for i in range(N):
        for j in range(M):
            mat[i][j] += temp_li[i][j]

def air(i,j,cn):
    if cn == 0: # 위쪽바람
        dii = [0,-1,0,1]#오른쪽끝위왼쪽끝아래
        djj = [1,0,-1,0]
        dir = 0
        pre = 0
        while True:
            ni = i + dii[dir]
            nj = j + djj[dir]
            if 0<=ni<N and 0<=nj<M:
                if mat[ni][nj] == -1:
                    break
                pre,mat[ni][nj] = mat[ni][nj],pre
            else:
                ni -= dii[dir]
                nj -= djj[dir]
                dir += 1
            i ,j = ni,nj
    else:  # 아래쪽바람
        dii = [0, 1, 0, -1]  # 오른쪽끝아래왼쪽끝위
        djj = [1, 0 ,- 1, 0]
        dir = 0
        pre = 0
        while True:
            ni = i + dii[dir]
            nj = j + djj[dir]
            if 0 <= ni < N and 0 <= nj < M:
                if mat[ni][nj] == -1:
                    break
                pre, mat[ni][nj] = mat[ni][nj], pre
            else:
                ni -= dii[dir]
                nj -= djj[dir]
                dir += 1
            i, j = ni, nj
N,M,T = map(int,input().split())
mat = [list(map(int,input().split())) for _ in range(N)]
di = [1,-1,0,0]
dj = [0,0,1,-1]
air_machine = []
ans = 0
for a in range(N):
    if mat[a][0] == -1:
        air_machine.append([a,0])
for i in range(T):
    munji()
    cn = 0
    for k in air_machine:
        air(k[0],k[1],cn)
        cn += 1

for i in range(N):
    for j in range(M):
        if mat[i][j]>0:
            ans += mat[i][j]
print(ans)