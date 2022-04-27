a = {input() for i in range(int(input()))}
arr = []
a = list(a)
a.sort()

for i in range(1,51):
    x = []
    for j in a:
        if len(j) == i:
            x.append(j)
    if len(x) != 0:
        arr.append(x)
    
for i in arr:
    for j in i:
        print(j)