N,M = [int(input()) for i in range(2)]  #노드, 간선
graph = {}
visited = [False for i in range(N)]
cnt = 0

def dfs(v):
    global cnt
    global visited
    global graph
    
    visited[v-1] = True
    cnt += 1
    for i in graph[v]:
        if not visited[i-1]:
            dfs(i)
            
for i in range(N):
    graph[i+1] = []
for i in range(M):
    n = input().split()
    graph[int(n[0])].append(int(n[1]))
    graph[int(n[1])].append(int(n[0]))
    
for i in graph[1]:
    if not visited[i-1]:
        dfs(i)
        
print(cnt-1)