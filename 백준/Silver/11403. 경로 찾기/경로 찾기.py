N = int(input())
floyd = [list(map(int,input().split())) for _ in range(N)]
for k in range(N):
    for i in range(N):
        for j in range(N):
            if floyd[i][k] ==1 and floyd[k][j] ==1:
                floyd[i][j] = 1
for i in range(N):
    print(*floyd[i])