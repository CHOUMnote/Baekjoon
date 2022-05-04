a = int(input())
str = input()
stack = []
arr = [0]*len(str)

for i in range(len(str)):
    arr[i] = str[i]

for i in range(a):
    num = int(input())
    for j in range(arr.count(chr(ord("A")+i))):
        arr[arr.index(chr(ord("A")+i))] = num

for i in arr:
    if i == '+':
        stack.append(stack.pop() + stack.pop())
    elif i == '*':
        stack.append(stack.pop() * stack.pop())
    elif i == '/':
        stack.append((1/stack.pop()) * stack.pop())
    elif i == '-':
        stack.append((-1*stack.pop()) + stack.pop())
    else:
        stack.append(int(i))
        
print(f'{stack.pop():.2f}')
