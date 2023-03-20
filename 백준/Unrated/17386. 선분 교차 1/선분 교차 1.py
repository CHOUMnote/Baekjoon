import sys

#p1 p2 p3
#p1 p2 p3
def ccw(p1:tuple,p2:tuple,p3:tuple)->int:
    return (p1[0]*p2[1] + p2[0]*p3[1]+p3[0]*p1[1]) - (p2[0]*p1[1] + p3[0]*p2[1] + p1[0]*p3[1])
    
input = sys.stdin.readline
a = list(map(int,input().split()))
b = list(map(int,input().split()))

p1 = (a[0], a[1])
p2 = (a[2], a[3])
p3 = (b[0], b[1])
p4 = (b[2], b[3])

if(ccw(p1,p2,p3)*ccw(p1,p2,p4) < 0 and ccw(p3,p4,p1)*ccw(p3,p4,p2) < 0):
    print(1)
else:
    print(0)