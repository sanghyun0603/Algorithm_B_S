w,h = map(int,input().split())
p,q = map(int,input().split())
t = int(input())
row = (p+t)//w
col = (q+t)//h
if row%2 == 0:
    ga_row = (p+t)%w
else:
    ga_row = w - (p+t)%w
if col%2 == 0:
    se_row = (q+t)%h
else:
    se_row = h - (q+t)%h
print(ga_row,se_row)