from collections import deque
def bfs(a):
    global cnt
    Q = deque([])
    Q.append(a)
    flag = 0
    for_b = 0
    while Q:
        for _ in range(len(Q)):
            n = Q.popleft()
            if n == B:
                flag = 1
                break
            if n > B:
                continue
            Q.append(n*2)
            n = str(n)
            n += '1'
            n = int(n)
            Q.append(n)
        cnt += 1
        if flag == 1:
            for_b =1
            break
    if for_b ==0:
        cnt = -1



A,B = map(int,input().split())
cnt = 0
bfs(A)
print(cnt)