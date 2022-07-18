import sys

class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
    def setNext(self,data):
        self.next = Node(data)
    def __str__(self):
        return str(self.data)
        
class Queue:
    def __init__(self):
        self.head = None
        self.size = 0
        self.tail = None
        
    def push(self,n):
        self.size += 1
        temp = self.head
        n = int(n)
        if temp is None:
            self.head = Node(n)
            self.tail = self.head
        else:
            self.tail.setNext(n)
            self.tail = self.tail.next
            
    def front(self):
        if self.size == 0:
            return -1
        return self.head
    def back(self):
        if self.size == 0:
            return -1
        return self.tail

    def isEmpty(self):
        return 1 if self.size == 0 else 0
    
    def pop(self):
        if self.size == 0:
            return -1
        a = self.head
        self.head = a.next
        self.size -= 1
        if self.size==0:
            self.head = None
            self.tail = None
        return a
       
q = Queue()

for i in range(int(sys.stdin.readline())):
    a = sys.stdin.readline().split()
    #a = input().split()
    if len(a) == 2:
        q.push(a[1])
    elif a[0] == 'pop':
        print(q.pop())
    elif a[0] == 'size':
        print(q.size)
    elif a[0] == 'empty':
        print(q.isEmpty())
    elif a[0] == 'front':
        print(q.front())
    elif a[0] == 'back':
        print(q.back())