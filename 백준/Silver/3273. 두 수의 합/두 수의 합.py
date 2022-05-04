a = int(input())
arr = list(map(int,input().split()))        #list(map(int,input().split()))
b = int(input())
arr.sort()
cnt = 0

p1 = 0
p2 = len(arr)-1
for i in range(len(arr)-1):    
    s = arr[p1]+arr[p2]
    if s == b:
        cnt+=1
        p1+=1
    elif s > b:
        p2-=1
    elif s < b:
        p1+=1
        
print(cnt)