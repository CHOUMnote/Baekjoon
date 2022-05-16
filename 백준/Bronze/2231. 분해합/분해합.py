def divSum(n:int):
    s = 0
    for i in range(len(str(n))):
        s+=int(str(n)[i])
    return s
def search(n : int):
    for i in range(0, n+1):
        if i + divSum(i) == n : return i
    return 0
    
print(search(int(input())))
