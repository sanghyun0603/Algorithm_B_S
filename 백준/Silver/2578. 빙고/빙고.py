import sys

bingo = [list(map(int,sys.stdin.readline().split())) for _ in range(5)]
sa = [list(map(int,sys.stdin.readline().split())) for _ in range(5)]
for s in range(2):
    for k in range(5):
        for i in range(5):
            for j in range(5):
                if bingo[i][j] == sa[s][k]:
                    bingo[i][j] = 0
call = 10
for s in range(2,5):
    for k in range(5):
        call += 1
        for i in range(5):
            for j in range(5):
                if sa[s][k] == bingo[i][j]:
                    bingo[i][j] = 0
        cnt = 0
        for i in range(5):
            #행판별
            if sum(bingo[i]) == 0:
                cnt += 1
        for j in range(5):
            for i in range(5):
                if bingo[i][j] != 0:
                    break
            else:
                cnt += 1
        #대각선 이 부분 잘못함.
        dx = [1,-1]
        dy = [1,+1]
        i=j=-1
        for _ in range(5):
            i = i+dx[0]
            j = j+dy[0]
            if bingo[i][j] != 0 :
                break
        else:
            cnt += 1
        i,j=5,-1
        for _ in range(5):
            i = i + dx[1]
            j = j + dy[1]
            if bingo[i][j] != 0:
                break
        else:
            cnt += 1
        if cnt >=3:
            break
    if cnt >=3:
        break
print(call)