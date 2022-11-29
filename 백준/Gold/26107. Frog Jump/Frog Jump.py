#frog jump -icpc 2022
import sys
input = sys.stdin.readline

#입력부
a, b = map(int, input().split())
c = list()  #점프 시퀸스
d = list()  #목표
total = [0]  #누적
area = dict()   #구간
jumpDist = [-1,]   #구간간 점프 거리
platform = [-1,]   #발판의 구간 번호
idx = 1

area[str(idx)]=list(map(int,input().split()))
platform.append(idx)
for _ in range(a-1):
    c.append(list(map(int,input().split())))
d = tuple(map(int,input().split()))


#구현부
for i,j in enumerate(c):
    if area[str(idx)][1] >= j[0]:
        area[str(idx)][1] = max(area[str(idx)][1], j[1])
    else:
        idx+=1
        area[str(idx)]=j
    platform.append(idx)

jumpDist = [0]+[0]*len(area)
for i in range(1,len(area)):
    jumpDist[i] = area[str(i+1)][0]-area[str(i)][1]

total = jumpDist
for i in range(1,len(jumpDist)):
    total[i] = total[i-1]+total[i]
    
result = 0
current = 1
for i in d:
    x=min(platform[current],platform[i])
    y=max(platform[current],platform[i])
    if(x==y) :
        continue
    result += total[y-1] - total[x-1]
    current = i

print(result)