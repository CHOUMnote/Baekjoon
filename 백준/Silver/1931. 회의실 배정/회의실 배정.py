import sys
def a(arr:list):
    newArr = []
    newArr.append(arr.pop(0))
    for i in arr:
        if newArr[len(newArr)-1][0] == i[0]:
            continue
        newArr.append(i)
    return newArr
    
heap = []
arr = [tuple(map(int,sys.stdin.readline().split())) for i in range(int(sys.stdin.readline()))]
arr.sort()

heap.append(arr.pop(0))
for i in range(len(arr)):
    x = heap[len(heap)-1]
    if(arr[i][1] < x[1]):
        heap[len(heap)-1]=arr[i]
    elif(arr[i][0] >= x[1]):
        heap.append(arr[i])

print(len(heap))