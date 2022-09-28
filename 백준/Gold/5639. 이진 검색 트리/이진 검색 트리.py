import sys
input = sys.stdin.readline
sys.setrecursionlimit(20_000)
class Node:
    def __init__(self,x:int):
        self.left = None
        self.right = None
        self.data = x
        
class Tree:
    def __init__(self):
        self.root = None
    
    def Insert(self,v):
        if self.root is None:
            self.root = Node(n)
            return
        t = self.root 
        while True:
            if t.data > v:
                if t.left is None:
                    t.left = Node(v)
                    break
                else:
                    t = t.left
            else:
                if t.right is None:
                    t.right = Node(v)
                    break
                else:
                    t = t.right
       
    def Postorder(self):
        self._porder(self.root)
    def _porder(self, node):
        if node.left:
            self._porder(node.left)
        if node.right:
            self._porder(node.right)
        print(node.data)
        
tree = Tree()
while True:
    try:
        n = int(input())
        tree.Insert(n)
    except:
        break
   
tree.Postorder()