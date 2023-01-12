res = []
for i in range(2) :
    a, b, c, d, e = list(map(int, input().split()))
    res.append(a * 6 + b * 3 + c * 2 + d + e * 2)
for i in res:
    print(i, end=' ')