N = int(input())
yeon_li = []
max_cnt = 0
for i in range(0,N+1):
    yeon_li.append(N)
    yeon_li.append(i)
    cnt = 2
    j = 0
    while True:
        c = yeon_li[j] - yeon_li[j+1]
        if c < 0:
            break
        else:
            yeon_li.append(c)
            cnt += 1
        j += 1
    if max_cnt < cnt:
        max_cnt = cnt
        max_li = yeon_li
    yeon_li = []
print(max_cnt)
print(*max_li)