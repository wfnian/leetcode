from typing import List


class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        d = dict()

        for s in strs:
            s_count = [0] * 26
            for i in s:
                s_count[ord(i) - ord("a")] += 1
            count = tuple(s_count)
            if count in d:
                d[count].append(s)
            else:
                d[count] = [s]

        return list(d.values())


print(Solution().groupAnagrams(["eat", "tea", "tan", "ate", "nat", "bat"]))
