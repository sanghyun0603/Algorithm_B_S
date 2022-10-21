N,M= map(int,input().split())
hear =[]
see = []
for i in range(N):
    hear.append(input())
for j in range(M):
    if j==0:
        continue
    see.append(input())
hear =set(hear)
see =set(see)
a=list(hear&see)
a.sort()
print(len(a))
for i in a:
    print(i)