import math

def solution(price):
    answer = 0
    if price < 100000:
        answer = price
    elif 100000 <= price < 300000:
        answer = math.trunc(price * 0.95)
    elif 300000 <= price < 500000:
        answer = math.trunc(price * 0.90)
    else:
        answer = math.trunc(price * 0.80)
    return answer