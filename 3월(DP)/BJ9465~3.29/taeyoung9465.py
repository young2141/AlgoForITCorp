from pprint import pprint 
# 푸는 중
T = int(input())

for _ in range(T):
    n = int(input())
    dp = [[0] * (n+3)]*2
    board = [[int(x) for x in input().split()]for y in range(2)]
    board[0] += [0,0]
    board[1] += [0,0]
    
    dp[0][0],dp[0][1],dp[1][0],dp[1][1] = board[0][0],board[0][1],board[1][0],board[1][1]
    
    for x in range(2, n+2):
        dp[0][x] = max(dp[0][x-2], dp[1][x-1]) + board[0][x]
        dp[1][x] = max(dp[1][x-2],dp[0][x-1]) + board[1][x]

    pprint(dp)
