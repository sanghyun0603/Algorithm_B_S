paper = int(input())
paper_li = [list(map(int,input().split())) for _ in range(paper)]
cnt= 0
mat = [[1]*100 for _ in range(100)]
for k in paper_li:
    for i in range(k[0],k[0]+10):
        for j in range(k[1],k[1]+10):
            if mat[i][j] == 1:
                mat[i][j] = 0
for i in range(100):
    for j in range(100):
        if mat[i][j] == 0:
            cnt += 1
print(cnt)