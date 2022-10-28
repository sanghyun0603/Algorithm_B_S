import sys

N= int(input())
num_li=[]
for i in range(N):
    n = int(sys.stdin.readline().strip())
    num_li.append(n)
num_li.sort()
for i in num_li:
    print(i)