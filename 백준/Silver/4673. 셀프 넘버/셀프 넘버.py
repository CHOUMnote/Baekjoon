def result(x:int)->int:
    a = 0
    for i in str(x):
        a+=int(i)
    return x+a

arr = [0]*20000

for i in range(1,10001):
    arr[result(i)]+=1

for i,j in enumerate(arr[:10001]):
    if i == 0:
        continue
    if j == 0:
        print(i)