N = int(input())
chu = int(input())
chu_dict = {}
chu_li = list(map(int,input().split()))
cnt = 0
for i in range(chu):
    if cnt < N:
        if chu_li[i] in chu_dict:
            chu_dict[chu_li[i]] += 1
        else:
            chu_dict[chu_li[i]] = 1
            cnt += 1
    else:
        if chu_li[i] in chu_dict:
            chu_dict[chu_li[i]] +=1
        else:
            keys = min(chu_dict,key=chu_dict.get)
            del chu_dict[keys]
            chu_dict[chu_li[i]] = 1
ch = sorted(chu_dict.keys())
print(*ch)