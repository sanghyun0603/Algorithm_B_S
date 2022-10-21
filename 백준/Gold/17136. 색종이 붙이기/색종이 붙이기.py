def jo(i,j,sak_cnt):
    global cnt
    if j > 9:
        jo(i+1,0,sak_cnt)
        return
    if i > 9:
        if cnt > sak_cnt:
            cnt = sak_cnt
        return
    if mat[i][j] == 1:
        for w in range(5): #5가지 색종이
            if sak[w] == 0: # 한 종이당 5개씩 사용가능
                continue
            if i+w > 9 or j+w > 9:    # 색종이 범위 밖이면 ㄴ
                continue
            flag = 0
            for ii in range(i,i+w+1):
                for jj in range(j,j+w+1):
                    if mat[ii][jj] != 1:
                        flag = 1
                        break
                if flag == 1:
                    break
            if flag == 0:
                for ii in range(i,i+w+1):
                    for jj in range(j,j+w+1):
                        mat[ii][jj] = 0
                sak[w] -=1
                jo(i,j+w+1,sak_cnt+1)# 모든경우 다생각
                for ii in range(i,i+w+1):
                    for jj in range(j,j+w+1):
                        mat[ii][jj] = 1
                sak[w] +=1
                #되돌리기
    else:
        jo(i,j+1,sak_cnt)

mat = [list(map(int,input().split())) for _ in range(10)]
sak = [5]*5
cnt = 10**6
mins = 10**6
jo(0,0,0)
if cnt == mins:
    print(-1)
else:
    print(cnt)