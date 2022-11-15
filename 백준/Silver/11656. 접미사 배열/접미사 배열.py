s = input()
string_list = []

for _ in s:
    string_list.append(s)
    s = s[1:]

for i in sorted(string_list):
    print(i)