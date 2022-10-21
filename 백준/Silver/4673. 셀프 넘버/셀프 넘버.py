num = list(range(1,10001))
not_self = []
for i in num:
    for j in str(i):
        i += int(j)
    if i<= 10000:
        not_self.append(i)
for dele in set(not_self):
    num.remove(dele)
for i in num:
    print(i)