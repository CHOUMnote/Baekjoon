import sys
input = sys.stdin.readline

class MinMax:
    def __init__(self,arr:list):
        self.min = arr[0]
        self.max = arr[0]
        
        for i in arr:
            if self.min > i:
                self.min = i
            if self.max < i:
                self.max = i
        print(self.min,self.max)
    
for _ in range(int(input())):
    input()
    MinMax(list(map(int,input().split())))