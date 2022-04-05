a = [int(input()) for i in range(int(input()))]
a.sort(reverse=True)
total = 0

for i in range(1,len(a)+1):
    if i%3==0:
        continue
    else:
        total+=a[i-1]
        
print(total)