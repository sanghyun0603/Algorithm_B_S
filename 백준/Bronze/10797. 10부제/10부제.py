N = int(input())
num = list(map(int,input().split()))
cnt = 0
for i in num:
    if i == N:
        cnt += 1
print(cnt)