import heapq
import sys
r = int(sys.stdin.readline().rstrip())

harr = []
arr = []
for i in range(r):
    s,t = map(int, sys.stdin.readline().split())
    arr.append((s,t))
arr.sort()
heapq.heappush(harr, arr.pop(0)[1])

for i in range(r-1):
    if harr[0] <= arr[i][0]:
        heapq.heappop(harr)
        heapq.heappush(harr, arr[i][1])
    else:
        heapq.heappush(harr, arr[i][1])
        
print(len(harr))