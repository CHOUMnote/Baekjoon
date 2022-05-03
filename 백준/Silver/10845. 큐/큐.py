import sys

class queue:
    def __init__(self):
        self.arr = []
    def push(self, x):
        self.arr.append(x)
    def pop(self):
        if len(self.arr) == 0:
            print(-1)
            return
        print(self.arr.pop(0))
    def size(self):
        print(len(self.arr))
    def empty(self):
        if len(self.arr) == 0 : print(1)
        else : return print(0)
    def front(self):
        if len(self.arr) == 0 : 
            print(-1)
            return
        print(self.arr[0])
    def back(self):
        if len(self.arr) == 0 : 
            print(-1)
            return
        print(self.arr[len(self.arr)-1])

a = queue()
n = sys.stdin.readline().rstrip()
for i in range(int(n)):
    x = sys.stdin.readline().rstrip().split()
    if x[0] == 'push':
        a.push(x[1])
    elif x[0] == 'pop':
        a.pop()
    elif x[0] == 'size':
        a.size()
    elif x[0] == 'empty':
        a.empty()
    elif x[0] == 'front':
        a.front()
    elif x[0] == 'back':
        a.back()