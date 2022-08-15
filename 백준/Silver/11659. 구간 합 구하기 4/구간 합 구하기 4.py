import sys
input = sys.stdin.readline
n,m = map(int,input().split())
arr = [0]+list(map(int,input().split()))
result = [0]*(n+1)

for i in range(1,n+1):
    result[i] = result[i-1] + arr[i]

for _ in range(m):
    a,b = map(int,input().split())
    print(result[b]-result[a-1])