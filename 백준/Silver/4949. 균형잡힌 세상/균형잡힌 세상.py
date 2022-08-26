stack = list()
def check(a:str):
    stack = []
    for i in a:
        if i!='(' and i!='[' and i!=']' and i!=')':
            continue
        
        if i=='[' or i=='(':
            stack.append(i)
            continue
        
        if i==')' and len(stack)>0:
            if stack.pop()=='(' :
                continue
            else : 
                print('no')
                return
        
        
        elif i==']' and len(stack)>0:
            if stack.pop()=='[' :
                continue
            else : 
                print('no')
                return
        else:
            print('no')
            return
        
    if len(stack)==0:
        print("yes")
        return
    else :
        print('no')
        return
    
while True:
    a = input()
    if a == "." : break
    check(a)