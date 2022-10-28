N = int(input())
scores = list(map(int,input().split()))
cnt = 0
all_sc = 0
for i in range(len(scores)):
    if scores[i] == 1:
        cnt += 1
        all_sc += cnt
    else:
        cnt = 0
print(all_sc)