import sys
N = int(input())
word_list = []
for i in range(N):
    word = (sys.stdin.readline().strip())
    word_list.append(word)
cnt = len(word_list)
for i in word_list:
    checkr = []
    for j in range(len(i)):
        if j > 0 and i[j] != i[j-1]:
            if i[j] in checkr:
                cnt -=1
                break
        if i[j] not in checkr:
            checkr.append(i[j])

print(cnt)