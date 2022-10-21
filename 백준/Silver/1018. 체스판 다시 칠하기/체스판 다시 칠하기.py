N, M = map(int,input().split())
mat = [list(input()) for _ in range(N)]
chess = [[0]*8 for _ in range(8)]
mins = 500
for i in range(N-8+1):
    for j in range(M-8+1):
        cnt = 0
        for r in range(8):
            for c in range(8):
                chess[r][c] = mat[r+i][c+j]
                if chess[0][0] == 'B':
                    chess[0][0] = 'W'
                    cnt +=1
                if r>0 and chess[r][0] == chess[r-1][0]:
                    if chess[r][c] == 'W':
                        chess[r][c] = 'B'
                        cnt +=1
                    elif chess[r][c] == 'B':
                        chess[r][c] = 'W'
                        cnt +=1
                if c>0 and chess[r][c] == chess[r][c-1]:
                    if chess[r][c-1] == 'W':
                        chess[r][c] = 'B'
                        cnt +=1
                    elif chess[r][c-1] =='B':
                        chess[r][c] = 'W'
                        cnt +=1
        if mins > cnt:
            mins = cnt
for i in range(N-8+1):
    for j in range(M-8+1):
        cnt = 0
        for r in range(8):
            for c in range(8):
                chess[r][c] = mat[r+i][c+j]
                if chess[0][0] == 'W':
                    chess[0][0] = 'B'
                    cnt +=1
                if r>0 and chess[r][0] == chess[r-1][0]:
                    if chess[r][c] == 'W':
                        chess[r][c] = 'B'
                        cnt +=1
                    elif chess[r][c] == 'B':
                        chess[r][c] = 'W'
                        cnt +=1
                if c>0 and chess[r][c] == chess[r][c-1]:
                    if chess[r][c-1] == 'W':
                        chess[r][c] = 'B'
                        cnt +=1
                    elif chess[r][c-1] =='B':
                        chess[r][c] = 'W'
                        cnt +=1
        if mins > cnt:
            mins = cnt
print(mins)