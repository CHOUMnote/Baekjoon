n = int(input())
arr = list(map(int,input().split()))
m = int(input())
x = list(map(int,input().split()))
arr.sort()

for i in x:
    start = 0;
    end = len(arr)-1
    p = (start+end)//2
    temp = 0
    while(start <= end):
        p = (start+end)//2
        if i == arr[p]:
            temp = 1
            break
        if i > arr[p]:
            start = p+1
        else :
            end = p-1
    if temp == 1:
        print(1)
    else:
        print(0)