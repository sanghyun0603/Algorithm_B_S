def prime(n):
    li = [True] *n
    m = int(n**0.5)
    for i in range(2,m+1):
        if li[i] == True:
            for j in range(i+i,n,i):
                li[j]=False
    return [i for i in range(2,n) if li[i]== True]

N = int(input())
num_li = list(map(int,input().split()))
max_num = max(num_li)
prime_list = prime(max_num+1)
cnt = 0
for i in num_li:
    if i in prime_list:
        cnt += 1
print(cnt)