#푸는중 
x = int(input())

dp = [0] * (1001)
dp[1] = 1
dp[2] = 2
for i in range(3,x+2,2):
    dp[i] = dp[i-1] + dp[i-2] + 1
    dp[i-1] = dp[i-2] + 1


print(dp[:x])
# print(dp[x])