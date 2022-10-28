N,M = map(int,input().split())
Mat1 = [list(map(int,input().split())) for _ in range(N)]
Mat2 = [list(map(int,input().split())) for _ in range(N)]
for i in range(N):
    for j in range(M):
        # new_mat.append(Mat1[i][j]+Mat2[i][j])
        print(Mat1[i][j]+Mat2[i][j],end=' ')
    print()