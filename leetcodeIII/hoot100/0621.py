class Solution(object):
    def leastInterval(self, tasks, n):
        """
        :type tasks: List[str]
        :type n: int
        :rtype: int
        """
        if not n or len(tasks) == 1:
            return len(tasks)
        cnt = [0] * 26
        for i in tasks:
            cnt[ord(i) - ord('A')] += 1

        count = 0
        max_ = 0
        for i in cnt:
            if i > max_:
                max_ = i
                count = 1
            elif i == max_:
                count += 1
        print(max_, count)

        return max(len(tasks), (max_ - 1) * (n + 1) + count)


print(Solution().leastInterval(["A", "A", "A", "B", "B", "B"], 2))
