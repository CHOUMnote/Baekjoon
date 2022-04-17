a,b = map(int,input().split())
arr1 = []
arr2 = []

for i in range(a):
    arr1.extend(map(int,input().split()))
    
for i in range(a):
    arr2.extend(map(int,input().split()))

for i in range(a*b):
    arr1[i] += arr2[i]
    
for i in range(a):
    for j in range(b):
        print(arr1[i*b+j], end=" ")
    print()