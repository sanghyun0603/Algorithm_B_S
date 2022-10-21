N,M = map(int,input().split())
dit = {}
for i in range(1,N+1):
    s = input()
    dit[i] = s
dit2 = {v:k for k,v in dit.items()}
for i in range(1,M+1):
    s = input()
    if s.isdigit():
        print(dit[int(s)])
    else:
        print(dit2[s])