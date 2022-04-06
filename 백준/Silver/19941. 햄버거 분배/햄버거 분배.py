n,k=map(int,input().split())
a = [i for i in input()]
count = 0
for i in range(len(a)):
    if a[i] == "P":
        for j in range(k,0,-1):
            if i-j >=0 and a[i-j] == "H":
                a[i-j]=" "
                a[i] = 'p'
                count+=1
                break;
    if a[i] =="P":
        for j in range(1,k+1):
            if i+j < len(a) and a[i+j] == "H":
                a[i+j]=" "
                count+=1
                break;
    
print(count)