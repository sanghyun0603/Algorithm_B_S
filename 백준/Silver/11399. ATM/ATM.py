N= int(input())
N_li= list(map(int,input().split()))
N_li.sort()
ans = 0
nu = 0
for i in range(N):
    nu += N_li[i]
    ans += nu
print(ans)