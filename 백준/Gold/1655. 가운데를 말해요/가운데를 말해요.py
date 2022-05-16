import heapq
import sys

heap1 = []  #작은 수 예정 
heap2 = []  #큰 수 예정

for i in range(int(sys.stdin.readline())):
    x = int(sys.stdin.readline())
    if len(heap1) == len(heap2):
        heapq.heappush(heap1, (-x,x))
    else:
        heapq.heappush(heap2, (x,x))
    if len(heap2) > 0 and heap1[0][1] > heap2[0][1]: #1번 힙 최솟값 > 2번 힙 최솟
        a = heapq.heappop(heap1)
        b = heapq.heappop(heap2)
        heapq.heappush(heap2, (a[1],a[1]))
        heapq.heappush(heap1, (-b[1],b[1]))
    print(heap1[0][1])
