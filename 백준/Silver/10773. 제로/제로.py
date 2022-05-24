a = []
for i in range(int(input())):
    x = int(input())
    a.append(x) if x!=0 else a.pop()
print(sum(a))
