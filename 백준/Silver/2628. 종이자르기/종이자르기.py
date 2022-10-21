garo, sero = map(int,input().split())
knife = int(input())
knife_li = [list(map(int,input().split())) for _ in range(knife)]
garo_li = [0,garo]
sero_li = [0,sero]
for i in range(knife):
    if knife_li[i][0] == 0:
        sero_li.append(knife_li[i][1])
    else:
        garo_li.append(knife_li[i][1])
garo_li.sort()
sero_li.sort()
jong_ga = []
jong_se = []
for i in range(len(garo_li)-1):
    jong_ga.append(garo_li[i+1]-garo_li[i])
for i in range(len(sero_li)-1):
    jong_se.append(sero_li[i+1]-sero_li[i])
print(max(jong_ga)*max(jong_se))