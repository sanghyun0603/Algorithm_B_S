def factor(n):
    if n>=2 and len(fac)<=n:
        fac.append(n*factor(n-1))
    return fac[n]

N = int(input())
fac = [1,1]
facto = str(factor(N))
cnt = 0
for i in range(len(facto)-1,-1,-1):
    if facto[i] == '0':
        cnt += 1
    else:
        break
print(cnt)