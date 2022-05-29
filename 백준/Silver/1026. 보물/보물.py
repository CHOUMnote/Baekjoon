n = int(input())
a = list(map(int,input().split()))
b = list(map(int,input().split()))
sum = 0
for i in sorted(a):
    m = max(b)
    sum+=m*i
    for j in range(n):
        if(m == b[j]):
            b[j]=-1
            break
print(sum)