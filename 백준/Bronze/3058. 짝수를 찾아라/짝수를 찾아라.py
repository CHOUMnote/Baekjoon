for i in range(int(input())):
    arr = [j for j in list(map(int,input().split())) if j%2==0]
    print(sum(arr),sorted(arr)[0])