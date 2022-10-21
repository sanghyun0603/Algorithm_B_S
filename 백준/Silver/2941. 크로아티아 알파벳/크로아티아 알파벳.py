s = input()
cro = ['c=','c-','dz=','d-','lj','nj','s=','z=']
lens = len(s)
cro_lens = 0
for i in range(len(cro)):
    if cro[i] == 'dz=' and s.count(cro[i]) != 0:
        cro_lens += (s.count(cro[i])*2)
    elif cro[i] in s :
        cro_lens += s.count(cro[i])
        if cro[i] == 'z=':
            cro_lens -= s.count('dz=')

print(lens-cro_lens)