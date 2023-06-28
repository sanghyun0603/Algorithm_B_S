import sys
sys.stdin = open('input_nong.txt')
T = int(input())
for tc in range(1,T+1):
    N = int(input())
    mat = [list(map(int,input())) for _ in range(N)]
    mid = N//2
    i = 0
    sums = 0
    for i in range(N):
        if i <= mid:
            for j in range(mid-i,mid+1+i):
                sums += mat[i][j]# 위에서부터 중간까지
        else:# 중간아래부터
            for j in range(i-mid,N+mid-i):
                sums += mat[i][j]
    print(f'#{tc} {sums}')