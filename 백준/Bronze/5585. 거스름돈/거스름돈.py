count = 0
a = 1000 - int(input())
count+= a // 500
a = a % 500
count+= a // 100
a = a % 100
count+= a // 50
a = a % 50
count+= a // 10
a = a % 10
count+= a // 5
a = a % 5
count+= a // 1
print(count)