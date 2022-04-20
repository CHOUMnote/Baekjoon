x = int(input())
a = list(map(int,input().split()))
b=[]
for i in range(x):
    b.append(a[i]/max(a)*100)
print(sum(b)/x)