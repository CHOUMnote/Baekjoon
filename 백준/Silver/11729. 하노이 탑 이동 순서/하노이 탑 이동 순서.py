def h(n, s, e, x):
    global c
    c +=1
    if n == 1:
        return
    h(n-1, s, x, e)
    h(n-1,x,e,s)

def hc(n, s, e, x):
    if n == 1:
        print(s,e)
        return
    hc(n-1, s, x, e)
    print(s,e)
    hc(n-1,x,e,s)

c = 0
n = int(input())
h(n, 1, 3, 2)
print(c)
hc(n, 1, 3, 2)
