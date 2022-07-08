n, k= map(int,input().split())
dp = [0 for i in range(k+1)]
coin = [int(input()) for i in range(n)]

#처음 초기화
for i in range(1,k+1):
    dp[i] = 1 if i%coin[0] == 0 else 0

for i in range(1,n):
    c = coin[i]
    for j in range(1,k+1):
        if j < c:
            continue
        elif j == c:
            dp[j] += 1
        else:
            dp[j] = dp[j] + dp[j-c]
            
print(dp[k])