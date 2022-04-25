def divv(a:str, b:str):
    global cnt
    if a == b:
        return cnt
    if int(a) > int(b):
        return -1
    
    if b[-1] == '1':
        b = b[:-1]
        cnt += 1
        return divv(a, b)
    
    if int(b[-1]) != 1:
        b = divmod(int(b),2)
        if b[1] == 0:
            cnt+=1
            b = b[0]
            return divv(a,str(b))
        else: return -1


a,b = input().split()
cnt = 1

print(divv(a,b))