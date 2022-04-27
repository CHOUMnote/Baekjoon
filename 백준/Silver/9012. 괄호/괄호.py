def vps(a:str)->bool:
    stack = []
    temp = ''
    for i in a:
        if i == '(':
            stack.append(i)
        else:
            if len(stack) == 0: return False
            else : temp = stack.pop()
            if temp == '(':
                continue
            else:
                return False
    if len(stack) == 0:
        return True
    else:
        return False

for i in range(int(input())):
    print("YES" if vps(input()) else "NO")