def gongbae(a,b) -> int:
    return int((a*b)/gongyak(a, b))
    
def gongyak(a,b) -> int :
    while b != 0:
        a,b = b,a%b
    return a

a,b = map(int,input().split())
print(gongyak(a, b))
print(gongbae(a, b))