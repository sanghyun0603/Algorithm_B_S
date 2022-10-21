import sys
N,K = map(int,(input()).split())
# N 날짜수 K는 연속적인 K일
temp = list(map(int,sys.stdin.readline().split()))
max_temp = -5000000
sums = 0
prefix = [0]
s = []
for i in range(N):
    sums += temp[i]
    prefix.append(sums)
for i in range(K,N+1):
    max_sum = prefix[i] - prefix[i-K]
    if max_temp < max_sum:
        max_temp = max_sum
print(max_temp)