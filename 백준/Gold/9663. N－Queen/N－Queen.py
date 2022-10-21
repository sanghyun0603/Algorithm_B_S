def nQueen(row):
    if row == N:
        global ans; ans += 1
    else:
        for col in range(N):
            if visit[col]: continue     # 같은 열은 제외
            a = row + col
            b = row - col + (N - 1)
            if line1[a] or line2[b]: continue   # 대각에 대해서 체크

            visit[col] = line1[a] = line2[b] = 1
            nQueen(row + 1)
            visit[col] = line1[a] = line2[b] = 0
N = int(input())
ans = 0
visit = [0] * N
line1 = [0] * (N + N)  # /  = row + col)
line2 = [0] * (N + N)  # \  = row - col + (N - 1)
nQueen(0)
print(ans)