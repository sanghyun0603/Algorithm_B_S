N = 100
mat = [[0]*N for _ in range(N)]
r_cli = [list(map(int,input().split())) for _ in range(4)]
cnt = 0
for k in range(len(r_cli)):
    for i in range(r_cli[k][1],r_cli[k][3]):
        for j in range(r_cli[k][0],r_cli[k][2]):
            if mat[i][j] == 0:
                mat[i][j] =1
                cnt += 1
print(cnt)