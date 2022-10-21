import sys
sys.setrecursionlimit(10**8)
def dp(n):
    if n==1:
        memo[n] =1
        return memo[n]
    if n==2:
        memo[n] = 2
        return memo[n]
    if memo[n]==0:
        memo[n] = dp(n-1)+dp(n-2)
    return memo[n]
N = int(input())
memo = [0]*(N+1)
print(dp(N)%10007)