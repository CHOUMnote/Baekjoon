def div(k):
    global arr
    if k == 1 or k == 3:
        return -1
    elif k%5%2 == 0:
        return k//5+k%5//2
    else:
        return ((k//5)-1)+(k%5+5)//2

n = int(input())

print(div(n))