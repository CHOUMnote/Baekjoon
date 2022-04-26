x,y = map(int,input().split())
arr = list(map(int,input().split()))
ceil = 0
result = 0
for i in range(0,len(arr)-2):
    a = arr[i]
    for j in range(i+1,len(arr)-1):
        b = arr[j]
        for k in range(j+1, len(arr)):
            c = arr[k]
            ceil = a + b + c
            if result < ceil and ceil <= y:
                result = ceil

print(result)