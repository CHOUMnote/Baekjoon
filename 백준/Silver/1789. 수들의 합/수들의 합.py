import math
a = int(input())
b = 0
count = 0
while b < a:
    count+=1
    b =count*(count+1)/2

if  b == a:
    print(count)
else:
    if b - a < count:
        count-=1
    else:
        count-2
    print(count)
