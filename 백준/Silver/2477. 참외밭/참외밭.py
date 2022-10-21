K = int(input())
six = [list(map(int,input().split())) for _ in range(6)]
garo = []
sero = []
for i in range(6):
    if six[i][0] == 1 or six[i][0] == 2:
        garo.append([six[i][1],i])
    else:
        sero.append([six[i][1],i])
ma = max(garo)
ms = max(sero)
mat = ma[0]*ms[0]
min_sero = abs(six[ma[1]-1][1]-six[(ma[1]+1)%6][1])
min_garo = abs(six[ms[1]-1][1]-six[(ms[1]+1)%6][1])
min_max = min_garo*min_sero
cham = mat - min_max
print(cham*K)