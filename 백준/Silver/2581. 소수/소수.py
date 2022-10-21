def prime(n,m):
    if n < 2:
        return False
    if m < 2:
        m =2
    n = n+1
    pr_li = [True]*n
    a = int(n**0.5)
    for i in range(2,a+1):
        if pr_li[i] == True:
            for j in range(i+i,n,i):
                pr_li[j] = False
    return [i for i in range(m,n) if pr_li[i] == True]

M = int(input())
N = int(input())
prime_list = prime(N,M)
if prime_list:
    print(sum(prime_list))
    print(prime_list[0])
else:
    print(-1)