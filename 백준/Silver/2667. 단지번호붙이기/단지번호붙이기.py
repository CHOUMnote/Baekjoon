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