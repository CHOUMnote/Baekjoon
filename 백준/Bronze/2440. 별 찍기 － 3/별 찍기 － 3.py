a = int(input())

for i in range(a):
    for j in range(a-i,0,-1):
        print("*", end="")
    print()