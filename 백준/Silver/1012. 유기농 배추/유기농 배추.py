import sys
input = sys.stdin.readline

for _ in range(int(input())):
    m,n,k = map(int,input().split())
    count = 0
    q = []
    arr = []
    for i in range(n):
        arr.append([0]*m)
    
    a = [list(map(int,input().split())) for i in range(k)]
    for x in a:
        i,j = x
        arr[j][i] = 1
    
    def bfs(x,y):
        q.append((x,y))
        moveX = [0,0,-1,1]
        moveY = [1,-1,0,0]
        
        while q:
            x,y = q.pop(0)
            if(x<0 or y<0 or x>=n or y>=m) : continue
            if(arr[x][y] == 1):
                arr[x][y] = 0
                for i in range(4):
                    q.append((x+moveX[i],y+moveY[i]))
                    
    for i in range(n):
        for j in range(m):
            if arr[i][j] == 1:
                bfs(i,j)
                count+=1
                
    print(count)