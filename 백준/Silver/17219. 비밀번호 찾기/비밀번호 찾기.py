import sys
N,M = map(int,input().split())
site_di = {}
for _ in range(N):
    a,b = sys.stdin.readline().split()
    site_di[a]=b
for i in range(M):
    a = sys.stdin.readline().rstrip()
    print(site_di[a])