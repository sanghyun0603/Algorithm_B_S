N = int(input())
N_li = set(map(int,input().split()))
M = int(input())
M_li = list(map(int,input().split()))
for i in M_li:
    if i in N_li:
        print(1,end=' ')
    else:
        print(0,end=' ')
print()