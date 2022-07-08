import math
#입력부
n, k= map(int,input().split())
dp = [0 for i in range(k+1)]
coin = [int(input()) for i in range(n)]
t = 0
#처음 초기화
for i in range(1,k+1):
    dp[i] = i//coin[0] if i%coin[0] == 0 else math.inf

for i in range(1,n):
    c = coin[i]
    for j in range(1,k+1):
        if j < c:
            continue    
        t = dp[j-c] + 1
        dp[j] = min(dp[j], t)
            
result = dp[k]
if result == math.inf:
    result = -1
print(result)