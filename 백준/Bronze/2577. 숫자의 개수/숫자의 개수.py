a = [0]*10
result = 1
result*=int(input())
result*=int(input())
result*=int(input())
for i in str(result):
    a[int(i)]+=1
for i in range(len(a)):
    print(a[i])