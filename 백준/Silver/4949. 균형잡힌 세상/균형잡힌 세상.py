while True :
    s = input()
    stack = []

    if s == "." : #종료조건
        break

    for i in s :
        if i == '[' or i == '(' : #여는건 넣기
            stack.append(i)
        elif i == ']' :# [이 있는 경우엔 짝이 맞으니 지우기
            if len(stack) != 0 and stack[-1] == '[' :
                stack.pop()
            else : # 아닐 경우엔 스택 비워지지만 않게 하기
                stack.append(1)
                break
        elif i == ')' : # 위와 마찬가지 반복
            if len(stack) != 0 and stack[-1] == '(' :
                stack.pop()
            else :
                stack.append(1)
                break
    if len(stack) == 0 :
        print('yes')
    else :
        print('no')