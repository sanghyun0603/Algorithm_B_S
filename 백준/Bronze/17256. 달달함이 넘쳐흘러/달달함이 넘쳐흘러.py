A = list(map(int, input().split()))
C = list(map(int, input().split()))
B = [C[0]-A[2], C[1]//A[1], C[2]-A[0]]
print(*B)