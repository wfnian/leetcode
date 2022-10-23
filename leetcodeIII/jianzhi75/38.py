class Solution(object):
    def permutation(self, s):
        """
        :type s: str
        :rtype: List[str]
        """
        res = []

        def trace(s, path, idxs):
            if len(path) == len(s):
                if path not in res:
                    res.append(path[:])
                    return
            for idx, e in enumerate(s):
                if idx in idxs:
                    continue
                path += e
                idxs.append(idx)
                trace(s, path, idxs)
                path = path[:-1]
                idxs.pop()

        trace(s, "", [])
        return res


print(Solution().permutation("abc"))
print(Solution().permutation("aab"))