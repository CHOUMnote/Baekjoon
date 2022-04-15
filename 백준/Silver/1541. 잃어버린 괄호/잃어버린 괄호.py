a = input()
arr = []
s = ""
sum = 0
n = 0
for i in a:
    if i == '-':
        arr.append(s)
        arr.append(i)
        s=""
    elif i =='+':
        arr.append(s)
        s=""
        pass
    else:
        s+=i
arr.append(s)
for i in range(len(arr)):
    temp = arr.pop()
    if temp == '-':
        sum+=n*-1
        n=0
    else:
        n += int(temp)
sum+=int(n)

print(sum)