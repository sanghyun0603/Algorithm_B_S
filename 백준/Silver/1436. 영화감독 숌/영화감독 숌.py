N = int(input())
num = 666
cnt = 0
while True:
    num = str(num)
    if '666' in num:
        cnt +=1
        if cnt == N:
            break
    num = int(num)
    num +=1
print(num)