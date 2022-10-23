class Solution(object):
    def gameOfLife(self, board):
        """
        :type board: List[List[int]]
        :rtype: None Do not return anything, modify board in-place instead.
        """
        def dfs(board, row, col, m, n):
            cnt = 0
            if row - 1 >= 0 and board[row - 1][col] == 1:
                cnt += 1
            if row + 1 < m and board[row + 1][col] == 1:
                cnt += 1
            if col - 1 >= 0 and board[row][col - 1] == 1:
                cnt += 1
            if col + 1 < n and board[row][col + 1] == 1:
                cnt += 1
            if row - 1 >= 0 and col - 1 >= 0 and board[row - 1][col - 1] == 1:
                cnt += 1
            if row - 1 >= 0 and col + 1 < n and board[row - 1][col + 1] == 1:
                cnt += 1
            if row + 1 < m and col - 1 >= 0 and board[row + 1][col - 1] == 1:
                cnt += 1
            if row + 1 < m and col + 1 < n and board[row + 1][col + 1] == 1:
                cnt += 1
            return cnt

        m = len(board)
        n = len(board[0])
        import copy
        next = copy.deepcopy(board)
        for i in range(m):
            for j in range(n):
                cnt = dfs(board, i, j, m, n)
                if board[i][j]:
                    if cnt < 2 or cnt > 3:
                        next[i][j] = 0
                else:
                    if cnt == 3:
                        next[i][j] = 1
        return next


print(Solution().gameOfLife([[1, 1], [1, 0]]))
