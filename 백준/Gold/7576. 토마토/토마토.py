import sys
input = sys.stdin.readline
from collections import deque

moveX = [0,0,-1,1]
moveY = [1,-1,0,0]
q = deque()

M,N = map(int,input().split())
tomato = list()

for i in range(N):
    tomato.append(list(map(int,input().split())))

for i in range(N):
    for j in range(M):
        if(tomato[i][j] == 1):
            q.append((i,j))
        
def bfs():
    count = -1
    
    while q:
        size = len(q)
        count+=1
        for _ in range(size):
            x,y = q.popleft()
            for i in range(4):
                a = (x+moveX[i],y+moveY[i])
                if(a[0]<0 or a[1]<0 or a[0]>=N or a[1]>=M) : continue
                elif(tomato[a[0]][a[1]] == 0):
                    tomato[a[0]][a[1]] = 1
                    q.append((a[0],a[1]))
    return count 

count = bfs()
for i in range(N):
    if count == -1: break
    for j in range(M):
        if(tomato[i][j] == 0):
            count=-1
            break
print(count)