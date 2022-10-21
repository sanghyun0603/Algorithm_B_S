N = int(input())
dp =[0]*(N+3)
dp[1],dp[2],dp[3]=0,1,1
if N >= 3:
    for n in range(3,N+1):
        dp[n] = dp[n - 1] + 1
        if n % 3 == 0:
            dp[n] = min(dp[n], dp[n // 3] + 1)
        if n % 2 == 0:
            dp[n] = min(dp[n], dp[n // 2] + 1)
print(dp[N])