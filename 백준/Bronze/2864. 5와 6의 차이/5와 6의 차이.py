def findMin(a,b):
    a = a.replace("6","5")
    b = b.replace("6","5")
    return int(a),int(b)

def findMax(a,b):
    a = a.replace("5","6")
    b = b.replace("5","6")
    return int(a),int(b)
a,b = input().split()

minsum = sum(findMin(a,b))
maxsum = sum(findMax(a,b))

print(minsum,maxsum)
