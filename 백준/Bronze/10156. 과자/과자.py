K, N, M = map(int, input().split())
res = (K*N)-M 

if res > 0:
    print(res)
else:
    print(0)