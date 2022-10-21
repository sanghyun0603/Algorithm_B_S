def dfs(n,s):
    global maxs

    for i in range(n,len(T_P_li)):
        if N+1 > T_P_li[i][0]+i:
            dfs(i+T_P_li[i][0],s+T_P_li[i][1])
        else:
            if i == len(T_P_li)-1:
                if maxs<s:
                    maxs= s
                return
            else:
                dfs(i+1,s)
    if maxs<s:
        maxs =s
    return


N = int(input())
T_P_li = [list(map(int,input().split())) for _ in range(N)]
maxs = 0
visited = [0]*(N)
dfs(0,0)
print(maxs)