a = input()
s = ""
result = ""
err = False
for i in a:
    if i != '.':
        s+=i
        
    if s == "XXXX":
        result+="AAAA"
        s = ""

    if i == '.':
        if s=="XX":
            result+="BB"
            s=""
        if len(s)==0:
            result+='.'

        else:
            err = True
            break
else:
    if s =="XX" :
        result += "BB"
        print(result)
    elif len(s) > 0:
        err = True
        
if(err):
    print(-1)
if(s == ""):
    print(result)