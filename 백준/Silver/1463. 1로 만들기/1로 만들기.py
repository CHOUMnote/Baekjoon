a = int(input())
DP = [0]*(a+4)  #DP기본 배열 4개가 초기화 돼있으므로 input +4
DP[0]=0
DP[1]=0
DP[2]=1
DP[3]=1



for i in range(4,a+1):
    DP[i]=DP[i-1]+1           #2,3의 값이 주어져있기 때문에 DP[i-1] <- -1의 경우 이기 때문에 DP[i-1]+1
    if i % 3 == 0 :
        DP[i] = min(DP[i], DP[i//3]+1)    
    if i % 2 == 0 :
        DP[i] = min(DP[i], DP[i//2]+1) #만약 a = 3 => 3이 1이 되는 횟수 = 3/2|3-1이 1이 되는 횟수 +1
    

print(DP[a])