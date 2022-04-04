a,b = map(int,input().split())
arr = [0]*a
count = 0
result = 0

for i in range(a):
    arr[i] = int(input())

for i in range(len(arr)):
    if b-arr[len(arr)-i-1] >= 0:
        count += b//arr[len(arr)-i-1]
        b -= (b//arr[len(arr)-i-1])*arr[len(arr)-i-1]
print(count)