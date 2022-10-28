N,K = map(int,input().split())
li = [list(map(int,input().split())) for _ in range(N)]

cnt_1 = []
cnt_2 = []
cnt_3 = []
cnt_4 = []
cnt_5 = []
cnt_6 = []
cnt = 0
for i in range(len(li)):
    if li[i][1] == 1:
        cnt_1.append(li[i][0])
    elif li[i][1] == 2:
        cnt_2.append(li[i][0])
    elif li[i][1] == 3:
        cnt_3.append(li[i][0])
    elif li[i][1] == 4:
        cnt_4.append(li[i][0])
    elif li[i][1] == 5:
        cnt_5.append(li[i][0])
    elif li[i][1] == 6:
        cnt_6.append(li[i][0])
a = cnt_1.count(1)
b = cnt_1.count(0)
if a%K == 0 :
    cnt += (a//K)
else:
    cnt += (a//K)+1
if b%K == 0 :
    cnt += (b//K)
else:
    cnt += (b//K)+1
a = cnt_2.count(1)
b = cnt_2.count(0)
if a%K == 0 :
    cnt += (a//K)
else:
    cnt += (a//K)+1
if b%K == 0 :
    cnt += (b//K)
else:
    cnt += (b//K)+1
a = cnt_3.count(1)
b = cnt_3.count(0)
if a%K == 0 :
    cnt += (a//K)
else:
    cnt += (a//K)+1
if b%K == 0 :
    cnt += (b//K)
else:
    cnt += (b//K)+1
a = cnt_4.count(1)
b = cnt_4.count(0)
if a%K == 0 :
    cnt += (a//K)
else:
    cnt += (a//K)+1
if b%K == 0 :
    cnt += (b//K)
else:
    cnt += (b//K)+1
a = cnt_5.count(1)
b = cnt_5.count(0)
if a%K == 0 :
    cnt += (a//K)
else:
    cnt += (a//K)+1
if b%K == 0 :
    cnt += (b//K)
else:
    cnt += (b//K)+1
a = cnt_6.count(1)
b = cnt_6.count(0)
if a%K == 0 :
    cnt += (a//K)
else:
    cnt += (a//K)+1
if b%K == 0 :
    cnt += (b//K)
else:
    cnt += (b//K)+1
print(cnt)