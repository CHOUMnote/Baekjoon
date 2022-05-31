from collections import deque

def DFS(v):
    stack = [v]
    while stack:
        a = stack.pop()
        if not visited1[a]:
            visited1[a] = True
            print(a,end=" ")
            if a in arr:
                stack+=sorted(list(set(arr[a])),key=lambda x:-x)#스택이라서
    
def BFS(v):
    q = deque([v])
    while q:
        a = q.popleft()
        if not visited2[a]:
            visited2[a]=True            
            print(a,end=" ")
            if a in arr:
                q+=sorted(list(set(arr[a])))
        

N,M,V = map(int,input().split())
arr = {}
printArr = []

for i in range(M):
    a,b = map(int, input().split())
    if a not in arr:        #a to b 추가
        arr[a] = [b]
    elif b not in arr[a]:   
        arr[a].append(b)
    
    if b not in arr:        #무방향 그래프
        arr[b] = [a]
    elif a not in arr[b]:
        arr[b].append(a)
#-> 딕셔너리 리스트 처럼 linked 처럼 사용
visited1=[False]*(N+1)
visited1[0] = True#DFS용
visited2 = visited1.copy() #BFS용


DFS(V)
print("")
BFS(V)