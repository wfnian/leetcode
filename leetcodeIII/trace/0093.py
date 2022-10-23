class Solution(object):
    def restoreIpAddresses(self, s):
        """
        :type s: str
        :rtype: List[str]
        """

        res = []

        def isvalid(s):
            res = 0
            for i in s:
                res = res * 10 + (ord(i) - ord('0'))
            if res > 255: return False
            if len(s) > 1 and not res: return False
            return (res // 10**(len(s) - 1)) > 0 or not res

        def trace(s, path, idx):
            if idx == len(s) and len(path) == 4:
                res.append('.'.join(path[:]))
                return
            for i in range(idx, len(s)):
                if i - idx > 3:
                    break
                if isvalid(s[idx:i + 1]):
                    path.append(s[idx:i + 1])
                    trace(s, path, i + 1)
                    path.pop()

        trace(s, [], 0)
        # res = isvalid("00")
        return res


print(Solution().restoreIpAddresses("0000"))
print(Solution().restoreIpAddresses("101023"))