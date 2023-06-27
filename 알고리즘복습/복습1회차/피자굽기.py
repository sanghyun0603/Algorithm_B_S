def enqueue(pizza):
    global rear
    rear = (rear+1)%lens
    q[rear]= pizza
def dequeue():
    global front
    front = (front+1)%lens
    return q[front]



T = int(input())
for tc in range(1,T+1):
    N, M = map(int,input().split())
    pizza = list(map(int,input().split()))
    lens = N+1
    q = [[0,0]]*lens
    front = rear = 0
    for i in range(N):
        enqueue([pizza[i],i])
    idx = N
    while q:
        a = dequeue()
        a[0] = a[0]//2
        if front == rear:
            break
        if a[0] == 0:
            if idx == M:
                pass
            else:
                enqueue([pizza[idx],idx])
                idx += 1
        else:
            enqueue(a)
    print(f'#{tc} {a[1]+1}')