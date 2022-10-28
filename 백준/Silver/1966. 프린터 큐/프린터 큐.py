from collections import deque
T = int(input())
for tc in range(1,T+1):
    N,M = map(int,input().split())
    a = list(map(int,input().split()))
    q = deque([])
    for i in range(N):
        if i == M:
            q.append([a[i],1])
        else:
            q.append([a[i],0])
    cnt = 0
    while q:
        n ,check= q.popleft()
        if q:
            if n >= max(q)[0]:
                cnt += 1
                if check == 1:
                    break
            else:
                q.append([n,check])
        else:
            cnt += 1
    print(cnt)