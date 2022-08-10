n = int(input())
arr = list(map(int,input().split()))
dp = [1]*n

def search():
    for i in range(1,n):
        for j in range(i-1,-1,-1):
            if arr[i] > arr[j]:
                temp  = dp[j]+1
                dp[i] = max(temp,dp[i])

search()
print(max(dp))