def ha(n, start, end) :
    if n == 1 :
        print(start, end)
        return
       
    ha(n-1, start, 6-start-end)
    print(start, end)
    ha(n-1, 6-start-end, end)
    
n = int(input())
print(2**n-1)
ha(n, 1, 3)