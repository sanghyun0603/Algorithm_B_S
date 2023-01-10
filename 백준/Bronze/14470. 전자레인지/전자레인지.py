A = int(input())
B = int(input())
C = int(input())
D = int(input())
E = int(input())

if A < 0:
    res = -A * C + D + B * E
else:
    res = (B - A) * E

print(res)