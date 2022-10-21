S = int(input())
switch = list(map(int,input().split()))
st_num = int(input())
stud = []
for i in range(st_num):
    stud.append(list(map(int,input().split())))
for i in range(len(stud)):
    if stud[i][0] == 1:
        k = stud[i][1] -1
        while k<S:
            if switch[k] == 1:
                switch[k] = 0
            else:
                switch[k] = 1
            k = k+stud[i][1]
    else:
        k = stud[i][1]-1
        j = 1
        if switch[k] == 1:
            switch[k] = 0
        else:
            switch[k] = 1
        while True:
            if k+j>S-1:
                break
            if k-j < 0:
                break
            if switch[k+j] != switch[k-j]:
                break
            if switch[k+j] == 0:
                switch[k+j]= 1
            else:
                switch[k+j]= 0
            if switch[k-j] == 0:
                switch[k-j] = 1
            else:
                switch[k-j] = 0
            j+=1
k = 1
for i in range(S):
    print(switch[i], end=' ')
    if (k%20== 0) :
        print('')
    k += 1