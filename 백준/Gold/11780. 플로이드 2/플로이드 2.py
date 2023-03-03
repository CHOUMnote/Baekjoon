import sys
def find(a,k,visited,cnt):
    if a != visited[a][k]:
        find(visited[a][k],k,visited,cnt+1)
    else:
        print(cnt,end=' ')
def find2(a,k,visited):
    if a != visited[a][k]:
        print(visited[a][k],end=' ')
        find2(visited[a][k],k,visited)
    else:
        print()
        return
input = sys.stdin.readline
n = int(input())
m = int(input())
lst = list()
for k in range(m):
    v,edge,w = map(int, sys.stdin.readline().split(" "))
    lst.append((v,edge,w))
visited = [[0 for k in range(n+1)] for k in range(n+1)]
floyd = [[100000000 for k in range(n+1)] for k in range(n+1)]
for k in lst:
    if floyd[k[0]][k[1]] > k[2]:
        floyd[k[0]][k[1]] = k[2]
        visited[k[0]][k[1]] = k[1]
for k in range(1,n+1):
    floyd[k][k] = 0
    visited[k][k] = k
for k in range(1,n+1):
    for i in range(1,n+1):
        for j in range(1,n+1):
            if floyd[i][j] > floyd[i][k] + floyd[k][j]:
                floyd[i][j] = floyd[i][k] + floyd[k][j]
                visited[i][j] = visited[i][k]
for k in range(1,n+1):
    for i in range(1,n+1):
        if floyd[k][i] == 100000000:
            print(0)
        else:
            print(floyd[k][i],end=' ')
    print()
for k in range(1,n+1):
    for i in range(1,n+1):
        if k == i or visited[k][i] == 0:
            print(0)
        else:
            find(k,i,visited,1)
            print(k,end=' ')
            find2(k,i,visited)
            