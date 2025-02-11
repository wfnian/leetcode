class Solution(object):
    def exist(self, board, word):
        """
        :type board: List[List[str]]
        :type word: str
        :rtype: bool
        """

        def dfs(board, word, visited, row, col, idx):
            if (
                (row >= 0 and row < len(board))
                and (col >= 0 and col < len(board[0]))
                and board[row][col] == word[idx]
                and not visited[row][col]
            ):
                visited[row][col] = True
                idx += 1
                if idx >= len(word):
                    return True
                res = (
                    dfs(board, word, visited, row + 1, col, idx)
                    or dfs(board, word, visited, row - 1, col, idx)
                    or dfs(board, word, visited, row, col + 1, idx)
                    or dfs(board, word, visited, row, col - 1, idx)
                )
                return res
            else:
                return False

        width = len(board[0])
        height = len(board)
        visited = [(width) * [0] for _ in range(height)]
        for i in range(height):
            for j in range(width):
                if dfs(board, word, visited, i, j, idx=0):
                    return True
        return False


print(
    Solution().exist(
        [["A", "B", "C", "E"], ["S", "F", "C", "S"], ["A", "D", "E", "E"]], "ABCCES"
    )
)
