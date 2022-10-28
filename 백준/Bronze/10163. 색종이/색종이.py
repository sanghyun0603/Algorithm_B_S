N = int(input())
mat = [[0]*1001 for _ in range(1001)]
rc_li = [list(map(int,input().split())) for _ in range(N)]
color = 1
for k in range(len(rc_li)):
    for i in range(rc_li[k][1],rc_li[k][1]+rc_li[k][3]):
        for j in range(rc_li[k][0],rc_li[k][0]+rc_li[k][2]):
            mat[i][j] = color
    color += 1
color = 1
for k in range(len(rc_li)):
    cnt = 0
    for i in range(1001):
        for j in range(1001):
            if mat[i][j] == color:
                cnt += 1
    print(cnt)
    color += 1