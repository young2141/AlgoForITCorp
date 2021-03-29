from pprint import pprint
import copy
T = int(input())

for _ in range(T):
    n = int(input()) - 1
    dp = [[0] * (n+3)for _ in range(2)]
    board = [[int(x) for x in input().split()]for y in range(2)]
    board[0] = [0] + board[0]
    board[1] = [0] + board[1]

    dp[0][1] = copy.deepcopy(board[0][1])
    dp[0][2] = copy.deepcopy(board[0][2])
    dp[1][1] = copy.deepcopy(board[1][1])
    dp[1][2] = copy.deepcopy(board[1][2])

    for x in range(2, n+2):
        dp[0][x] = max(dp[0][x-2], dp[1][x-1],dp[1][x-2]) + board[0][x]
        dp[1][x] = max(dp[1][x-2],dp[0][x-1],dp[0][x-2]) + board[1][x]
    print(max(dp[0][n+1],dp[1][n+1]))
