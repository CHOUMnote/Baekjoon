x = int(input())
a = list(map(int,input().split()))
y=[]
b=a[0]
c=a[0]
for i in range(x):
    y.append(a[i])
for i in range(x):
    if y[i] > b:
        b = a[i]
    if y[i] < c:
        c = a[i]
print(c,b)