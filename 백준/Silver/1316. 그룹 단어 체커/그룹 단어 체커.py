import sys
input = sys.stdin.readline

count = 0
def a(word:str):
    global count
    temp = [word[0]]
    before = word[0]
    
    for i in word[1:]:
        if before == i:
            continue
        elif i not in temp:
            temp.append(i)
            before = i
        elif i in temp:
            return 0
        else:
            return 0
    return 1
        

for _ in range(int(input())):
    count += a(input())

print(count)    