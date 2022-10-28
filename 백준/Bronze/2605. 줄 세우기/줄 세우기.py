N = int(input())
num_li = list(map(int,input().split()))
P = []
for i in range(N):
    P.insert(i-num_li[i],i+1)
print(*P)