from collections import deque
def bfs(hyuni,hyunj):
    global cnt
    Q = deque([])
    Q.append((hyuni,hyunj))
    flag = 0
    while Q:
        for _ in range(len(Q)):
            i,j = Q.popleft()
            if i == moi and j == moj:
                flag = 1
                break
            for w in range(8):
                ni = i+di[w]
                nj = j+dj[w]
                if 0<= ni < N and 0 <= nj < N and visited[ni][nj] == 0:
                    Q.append((ni,nj))
                    visited[ni][nj] = 1
            if flag == 1:
                break
        if flag == 1:
            break
        cnt += 1


T = int(input())
for T in range(1,T+1):
    N = int(input())
    hyuni, hyunj = map(int,input().split())
    moi, moj = map(int,input().split())
    di = [-2,-2,-1,-1,1,2,2,1]
    dj = [-1,1,-2,2,-2,-1,1,2]
    visited = [[0]*N for _ in range(N)]
    cnt = 0
    bfs(hyuni,hyunj)
    print(cnt)