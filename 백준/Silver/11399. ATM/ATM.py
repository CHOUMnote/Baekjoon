def sort(k):
    for i in range(len(k)):
        for j in range(i,len(k)):
            if k[i] > k[j]:
                k[i], k[j] = k[j], k[i]
    return k

a = int(input())
arr = input().split()
for i in range(len(arr)):
    arr[i]=int(arr[i])
    
arr = sort(arr)

count = 0
result = 0
for i in arr:
    result += i
    arr[count] = result
    count+=1

result = 0
for i in arr:
    result+=i
print(result)