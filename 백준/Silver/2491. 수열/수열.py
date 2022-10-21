import sys
N = int(input())
num_li = list(map(int,sys.stdin.readline().split()))
cnt = 1
cnt_mi = 1
cnt_li =[1]
for i in range(1,N):
    if num_li[i] < num_li[i-1]:
        cnt_li.append(cnt)
        cnt = 1
    else:
        cnt += 1
    cnt_li.append(cnt)
for i in range(1,N):
    if num_li[i] > num_li[i-1]:
        cnt_li.append(cnt_mi)
        cnt_mi = 1
    else:
        cnt_mi += 1
    cnt_li.append(cnt_mi)
print(max(cnt_li))