N = int(input())
li = [list(map(int,input().split())) for _ in range(N)]
cnt_li =[]
for i in range(N):
    cnt = 0
    for j in range(N):
        if li[i][0] < li[j][0] and li[i][1] < li[j][1] :
            cnt += 1
    cnt_li.append(cnt+1)
print(*cnt_li)
