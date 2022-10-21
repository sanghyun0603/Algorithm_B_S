from collections import deque
'''
1
7 2 3
2 4 8 1
1 3 6 4
1 5 7 3
'''

def bfs():
    mis = 0
    cnt = 0
    Q = deque([list(map(int, input().split())) for _ in range(K)])
    while cnt < M:
        cnt += 1
        check_li = []
        dit = {}
        for m in range(len(Q)):
            i, j, mi, mo = Q.popleft()
            move = delta.get(mo)
            for_break = 0
            ni = i + move[0]
            nj = j + move[1]
            if 0 <= ni < N and 0 <= nj < N:
                if ni == 0 or ni == N - 1 or nj == 0 or nj == N - 1:
                    mi = mi // 2
                    if mo == 1 or mo == 3:
                        mo += 1
                    else:
                        mo -= 1
                    if mi != 0:
                        Q.append([ni, nj, mi, mo])
                else:
                    if dit.get((ni,nj),0):
                            previous_mi = dit[(ni,nj)][2]
                            previous_mis = dit[(ni,nj)][3]
                            previous_mo = dit[(ni,nj)][4]
                            if previous_mi < mi:
                                dit[(ni,nj)] =[ni,nj,mi,mi+previous_mis,mo]
                            else:
                                dit[(ni,nj)] = [ni,nj,previous_mi,mi+previous_mis,previous_mo]
                    else:
                        dit[(ni,nj)] = [ni,nj,mi,mi,mo] #좌료2개 최대미생물 미생물합 방향
        for a,b,c,d,e in dit.values():
            Q.append([a,b,d,e])
    for i in range(len(Q)):
        mis += Q[i][2]
    return mis


T = int(input())
for tc in range(1, T + 1):
    N, M, K = map(int, input().split())
    # 행렬크기, 격리 시간, 미생물 군집의 개수
    # 1<= 이동범위 < N-1 이 밖으로 나가면
    # 절반되면서 방향 반대로
    delta = {1: [-1, 0], 2: [1, 0], 3: [0, -1], 4: [0, 1]}
    a = bfs()

    print(f'#{tc} {a}')