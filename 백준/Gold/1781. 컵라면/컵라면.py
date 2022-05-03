import heapq
import sys

array = []
day=0
cup=0
queue = [] #힙
n = sys.stdin.readline().rstrip()

for i in range(int(n)):
    day, cup = map(int, sys.stdin.readline().rstrip().split())
    array.append((day, cup))
array.sort()
for i in array:
    heapq.heappush(queue, i[1])
    if i[0] < len(queue):
        heapq.heappop(queue)

print(sum(queue))