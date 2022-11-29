import sys
input = sys.stdin.readline

a = input()
result = 0
t = 0
previous = '('

for i in a:
    if(i=='('):
        previous = '('
        t+=1
    if(i==')'):
        t-=1
        if(previous=='('):
            result +=t
            previous = ')'
        
print(result)
    