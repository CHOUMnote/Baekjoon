import sys
#input = sys.stdin.readline

a,b = map(int,input().split())
arr = list(map(int,input().split()))
s = [arr[0]]

for i in range(1,a):
    x = s[i-1]+arr[i]
    s.append(x)

m = s[b-1]
for i in range(a-b):
    x=s[b+i]-s[i]
    m = x if m < x else m
print(m)