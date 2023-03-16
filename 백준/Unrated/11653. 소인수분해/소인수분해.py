import sys

def p(n:int):
    if(n<=1) : return
    
    check = [True for i in range(n+1)]
    m = int(n**0.5)
    
    for i in range(2,m+1):
        if check[i] is True:
            for j in range(i*i, n+1, i):
                check[j] = False

    p=[i for i in range(2,n+1) if check[i] == True]
    return p

input = sys.stdin.readline
n = int(input())
if n >= 2:
    pnum = p(n)
    result = list()

    while True:
        if n in pnum:
            result.append(n)
            break
        
        else:
            for i in pnum:
                if n%i == 0:
                    n=n//i
                    result.append(i)
                    break

    for i in sorted(result) : print(i)