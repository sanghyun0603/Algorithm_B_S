N, M, K = map(int, input().split())
mins = min(M, K)
maxs = max(M, K)
print(mins + N - maxs)