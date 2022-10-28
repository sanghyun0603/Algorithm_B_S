N = int(input())
fini = 0
num = 0
while N > fini:
    num += 1
    fini += num
idx = fini -N
if num%2 == 0:
    bunja = num
    bunmo = 1
    for i in range(idx):
        bunja -=1
        bunmo +=1
else:
    bunja = 1
    bunmo = num
    for i in range(idx):
        bunja +=1
        bunmo -=1
print(f'{bunja}/{bunmo}')