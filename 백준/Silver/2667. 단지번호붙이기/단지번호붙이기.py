#DFS 방식 풀이
A = int(input())
a = [input() for i in range(A)]
result = []
count = 0
moveX = [0,0,-1,1]
moveY = [1,-1,0,0]
    
for i,v in enumerate(a):
    a[i] = list(v)

def dfs(x,y):
    global count
    if x<0 or y<0 or x>=A or y>=A:
        return 
    if a[x][y] == '0':
        return 
    if a[x][y] == '1':
        count+=1
        a[x][y] = '0'
        for i in range(4):
            dfs(x+moveX[i], y+moveY[i])
    return
    

for i in range(A):
    for j in range(A):
        dfs(i,j)
        if count!=0:
            result.append(count)
        count=0
        
print(len(result))
for i in sorted(result):
    print(i)
    
'''
#BFS풀이
A = int(input())
a = [input() for i in range(A)]

result = []
q = [] #bfs 시점 시퀸스

for i,v in enumerate(a):
    a[i] = list(v)

def bfs(x,y):
    q.append((x,y))
    moveX = [0,0,-1,1]
    moveY = [1,-1,0,0]
    count = 0
    while q:
        x,y = q.pop(0)
        if(x<0 or y<0 or x>=A or y>=A) : continue
        if(a[x][y] == '1'):
            count+=1
            a[x][y] = '0'
            for i in range(4):
                q.append((x+moveX[i],y+moveY[i]))
    return count

for i in range(A):
    for j in range(A):
        if(a[i][j] != '0'):
            result.append(bfs(i,j))
            
print(len(result))
for i in sorted(result):
    print(i)
'''
