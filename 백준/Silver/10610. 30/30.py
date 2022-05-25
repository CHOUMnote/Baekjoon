arr = [i for i in input()]
arr.sort(key=lambda x:-int(x))

if(arr[len(arr)-1] != '0'):
    print(-1)
else:
    a = "".join(arr)
    if int(a) % 30 == 0:
        print(a)
    else:
        print(-1)