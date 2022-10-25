from collections import deque

def bfs(n):
    global cnt
    Q = deque([])
    Q.append(n)
    flag = 0
    while Q:
        for _ in range(len(Q)):
            su = Q.popleft()
            if su == K:
                flag = 1
                break
            su_e = []
            su_e.append(su+1)
            su_e.append(su-1)
            su_e.append(2*su)
            for i in su_e:
                if 0<= i <= 100000:
                    if visited[i] == 0:
                        Q.append(i)
                        visited[i] = 1
        if flag == 1:
            break
        cnt += 1
N,K = map(int,input().split())
ra = max(N,K)
cnt = 0
visited = [0]*(100001)
bfs(N)
print(cnt)