import heapq
import sys
arr = []
for i in range(int(input())):
    a = int(sys.stdin.readline().rstrip())
    if a == 0:
        if len(arr) == 0:
            print(0)
        else :
            print(heapq.heappop(arr)[1])
    else:
        heapq.heappush(arr, (-a,a))