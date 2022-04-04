count = 0
a = input()
b = ""
n1 = ""
n2 = ""

if int(a) < 10:
    a+="0"
b = a[0]+a[1]

while 1:
    n1 = b[1]
    n2 = str(int(b[0])+int(b[1]))
    n2 = n2[len(n2)-1]
    b = n1+n2
    count+=1
    
    if a==b:
        break
    
print(count)

