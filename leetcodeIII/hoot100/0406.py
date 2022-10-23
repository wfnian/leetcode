class Solution(object):
    def reconstructQueue(self, people):
        """
        :type people: List[List[int]]
        :rtype: List[List[int]]
        """
        res = []
        people = sorted(people, key=lambda x: (-x[0], x[1]))
        for p in people:
            if len(res) <= p[1]:
                res.append(p)
            else:
                res.insert(p[1], p)
        return res
