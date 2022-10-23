class Solution(object):
    def exist(self, board, word):
        """
        :type board: List[List[str]]
        :type word: str
        :rtype: bool
        """
        def dfs(board, word, row, col, idx, visit):
            if row < len(board) and row >= 0 and col >= 0 and col < len(
                    board[0]) and idx < len(word) and board[row][col] == word[idx] and visit[row][col] == 1:
                idx += 1
                visit[row][col] = 0
                if idx == len(word):
                    return True

                res = dfs(board, word, row + 1, col, idx, visit) or dfs(
                    board, word, row - 1, col, idx, visit) or dfs(board, word, row, col + 1, idx, visit) or dfs(
                        board, word, row, col - 1, idx, visit)
                visit[row][col] = 1
                return res

            else:
                return False

        row = len(board)
        col = len(board[0])
        visit = [col * [1] for _ in range(row)]

        for i in range(row):
            for j in range(col):
                if dfs(board, word, i, j, 0, visit):
                    return True
        return False


print(Solution().exist([["A", "B", "C", "E"], ["S", "F", "C", "S"], ["A", "D", "E", "E"]], "AC"))
