scores = [] 
for _ in range(6):  
    scores.append(int(input())) 
scores1 = sorted(scores[:4])
scores2 = scores[4:] 
print(sum(scores1[1:]) + max(scores2))