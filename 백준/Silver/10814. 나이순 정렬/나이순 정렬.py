result = []
for i in range(int(input())):
    x,y = input().split()
    x = int(x)
    result.append((x,y))
    
result.sort(key=lambda a:a[0])
for i in result:
    print(i[0],i[1])