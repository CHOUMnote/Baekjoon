a,b = map(int,input().split())
n = list(map(int,input().split()))
for i in range(a):
    if b > n[i]:
        print(n[i], end=" ")