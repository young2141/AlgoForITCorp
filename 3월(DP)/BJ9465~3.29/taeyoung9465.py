T = int(input())

for _ in range(T):
    n = int(input())
    dp = [[0] * n]*2
    board = [[0]*(n+2)]
    board.append([0] + [int(x) for x in input().split()]+[0])
    board.append([0] + [int(x) for x in input().split()]+[0])
    board.append([0]*(n+2))

    dp[0][0] = board[1][1]
    dp[0][1] = board[2][3]
    for i in range(1, n+1):
        for j in range(2):
            dp[i][j] = max(dp[i][j-2], dp[i][j-3])
