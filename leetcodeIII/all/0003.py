class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        length = len(s)
        i, j, res = 0, 0, 0
        window = []
        while (j < length):
            if s[j] in window:
                res = max(res, len(window))
                i = window.index(s[j])
                window = window[i + 1:]
            window.append(s[j])
            j += 1

        return max(res, len(window))


res = Solution().lengthOfLongestSubstring(" ")
print(res)