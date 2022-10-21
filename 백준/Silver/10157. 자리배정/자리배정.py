C,R = map(int,input().split())
mat = [[0]*C for _ in range(R)]
K = int(input())
dx =[ 1,0,-1,0]
dy =[0,1,0,-1]
tick = C*R
dist = 0
cnt = 1
if K > tick:
    print(0)
else:
    i = j = 0
    mat[i][j] = cnt
    if cnt == K:
        print(i+1,j+1)
    else:
        while True:
            i = i+dx[dist]
            j = j+dy[dist]
            if 0<=i<R and 0<= j < C and mat[i][j] ==0:
                cnt += 1
                mat[i][j] = cnt
                if cnt == K:
                    break
            else:
                i = i-dx[dist]
                j = j-dy[dist]
                dist = (dist+1)%4
        print(j+1,i+1)