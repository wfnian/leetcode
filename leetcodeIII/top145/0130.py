class Solution(object):
    def solve(self, board):
        """
        :type board: List[List[str]]
        :rtype: None Do not return anything, modify board in-place instead.
        """
        def dfs(board, row, col):
            if row >= 0 and row < len(board) and col >= 0 and col < len(board[0]) and board[row][col] == 'O':
                if row == 2 and col == 3:
                    print()
                board[row][col] = '@'
                dfs(board, row + 1, col)
                dfs(board, row - 1, col)
                dfs(board, row, col - 1)
                dfs(board, row, col + 1)

        for i in range(len(board)):
            for j in range(len(board[0])):
                if i == 0 or j == 0 or i == len(board) - 1 or j == len(board[0]) - 1:
                    dfs(board, i, j) 
        for i in range(len(board)):
            for j in range(len(board[0])):
                if board[i][j] == 'O':
                    board[i][j] = 'X'
        for i in range(len(board)):
            for j in range(len(board[0])):
                if board[i][j] == '@':
                    board[i][j] = 'O'
        return board


print(Solution().solve([["X", "O", "X", "O", "X", "O"], ["O", "X", "O", "X", "O", "X"],
                        ["X", "O", "X", "O", "X", "O"], ["O", "X", "O", "X", "O", "X"]]))
