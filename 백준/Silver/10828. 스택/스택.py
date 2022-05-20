import sys
class stack:
    def __init__(self):
        self.stack = []
        
    def push(self,x):
        self.stack.append(x)
    
    def pop(self):
        if len(self.stack) == 0:
            print(-1)
            return
        print(self.stack.pop())
        
    def size(self):
        print(len(self.stack))
    
    def empty(self):
        if len(self.stack) == 0:
            print(1)
            return
        print(0)
    
    def top(self):
        if len(self.stack) == 0:
            print(-1)
            return
        print(self.stack[len(self.stack)-1])
        
stack = stack()
for i in range(int(input())):
    a = sys.stdin.readline().split()
    if a[0] == 'push':
        stack.push(a[1])
    if a[0] == 'pop':
        stack.pop()
    if a[0] == 'size':
        stack.size()       
    if a[0] == 'empty':
        stack.empty()    
    if a[0] == 'top':
        stack.top()

