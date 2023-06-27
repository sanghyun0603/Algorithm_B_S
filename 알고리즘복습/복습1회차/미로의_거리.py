def enqueue(gil):
    global rear
    rear += 1
    q[rear] = gil
def dequeue():
    global front
    front += 1
    return q[front]
def bfs(i,j,N):
    visited = [[0]*N for _ in range(N)]
    enqueue((i,j))
    visited[i][j] = 1
    di =[0,1,0,-1]
    dj =[1,0,-1,0]
    while front!=rear:
        a,b = dequeue()
        if maze[a][b] == 3:
            return visited[a][b] -2
        for k in range(4):
            ni,nj = a+di[k],b+dj[k]
            if (0 <= ni <N) and (0<= nj <N) and maze[ni][nj] !=1 and visited[ni][nj] == 0:
                enqueue((ni,nj))
                visited[ni][nj] = visited[a][b] + 1
    return 0

T = int(input())
for tc in range(1,T+1):
    N = int(input())
    front ,rear = -1,-1
    q = [(0,0)]*(N*N)
    maze = [list(map(int,input())) for _ in range(N)]
    si = 0
    sj = 0
    for i in range(N):
        for j in range(N):
            if maze[i][j] == 2:
                si,sj = i,j
                break
    print(f'#{tc} {bfs(si,sj,N)}')