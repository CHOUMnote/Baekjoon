'''
q = [[0,0]]
N = 4
M = 6
g = [[1,0,1,1,1,1],[1,0,1,0,1,0],[1,0,1,0,1,1],[1,1,1,0,1,1]]
'''
g = []
N,M = map(int,input().split())
q = []
q.append([0,0])
for i in range(N):
    g.append(list(map(int,input())))


def bfs():
    #상하좌우 무우빙
    moveX = [0,0,-1,1]
    moveY = [1,-1,0,0]
    
    while q:
        x,y = q.pop(0)  #현 위치
        for i in range(4):
            a = moveX[i] + x
            b = moveY[i] + y
            if a<0 or b<0 or a>=M or b>=N:
                continue
            if g[b][a] == 0:
                continue
            if g[b][a] == 1:
                g[b][a] = g[y][x]+1
                q.append([a,b])
                
    return g[N-1][M-1]
    
print(bfs())