import sys
input = sys.stdin.readline

class order:
    def __init__(self,a:dict):
        self.tree = a
        
    def preorder(self,a:str):
        if a == '.':
            return
        else:
            print(a, end='')
            self.preorder(self.tree[a][0])
            self.preorder(self.tree[a][1])
    
    def inorder(self,a:str):
        if a == '.':
            return
        else:
            self.inorder(self.tree[a][0])
            print(a, end='')
            self.inorder(self.tree[a][1])
            
    def postorder(self,a:str):
        if a == '.':
            return
        else:
            self.postorder(self.tree[a][0])
            self.postorder(self.tree[a][1])
            print(a, end='')
   
tree = {'A':['.','.']}

for i in range(int(input())):
    a,b,c = input().split()
    tree[a] = [b,c]


#tree = {'A': ['B', 'C'], 'B': ['D', '.'], 'C': ['E', 'F'], 'E': ['.', '.'], 'F': ['.', 'G'], 'D': ['.', '.'], 'G': ['.', '.']}

order = order(tree)

order.preorder('A')
print()
order.inorder('A')
print()
order.postorder('A')