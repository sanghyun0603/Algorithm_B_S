N=input()
for i in range(1,len(N)+1):
    print(N[i-1],end='')
    if i%10 == 0:
        print('')