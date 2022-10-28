alpha = {alpha : 0 for alpha in 'abcdefghijklmnopqrstuvwxyz'}
s = input()
for i in range(len(s)):
        alpha[s[i]] += 1
print(*alpha.values())