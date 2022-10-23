class Solution(object):
    def exist(self, board, word):
        """
        :type board: List[List[str]]
        :type word: str
        :rtype: bool
        """
        def dfs(board, word, i, j, idx, visit):
            if i >= 0 and i < len(board) and j >= 0 and j < len(
                    board[0]) and board[i][j] == word[idx] and not visit[i][j]:
                if idx == len(word) - 1:
                    return True
                idx += 1
                visit[i][j] = True
                res = dfs(board, word, i + 1, j, idx, visit) or dfs(board, word, i - 1, j, idx, visit) or dfs(
                    board, word, i, j + 1, idx, visit) or dfs(board, word, i, j - 1, idx, visit)
                visit[i][j] = False
                return res
            else:
                return False

        visit = [[0] * len(board[0]) for i in range(len(board))]
        for i in range(len(board)):
            for j in range(len(board[0])):
                if dfs(board, word, i, j, 0, visit):
                    return True
        return False


print(Solution().exist([["A", "B", "C", "E"], ["S", "F", "C", "S"], ["A", "D", "E", "E"]], "ASADEE"))
