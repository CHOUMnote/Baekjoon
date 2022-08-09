a = [int(input()) for i in range(10)]
b=set([i%42for i in a])
print(len(b))