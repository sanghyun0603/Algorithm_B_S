num1 = list(map(int,input().split()))
num2 = list(map(int,input().split()))

S = sum(num1)
T = sum(num2)
if S < T:
    print(T)
else:
    print(S)