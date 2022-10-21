# 메모제이션 사용하기.
def coun(n):
    a =len(num0)
    if n>=a:
        for i in range(a,n+1):
            num0.append(num0[i-2]+num0[i-1])
            num1.append(num1[i-2]+num1[i-1])
    print(num0[n],num1[n])

T = int(input())
for tc in range(1,T+1):
    N = int(input())
    num0 = [1,0,1]
    num1 = [0,1,1]
    coun(N)