class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        # 两数之和
        res = []
        nums.sort()
        for i in range(len(nums)):
            target = nums[i]
            d = set()
            for j in range(i, len(nums)):
                if i != j:
                    if -(target + nums[j]) in d:
                        if [target, nums[j], -(target + nums[j])] not in res:
                            res.append([target, nums[j], -(target + nums[j])])
                        # res.append([target, nums[j], -(target + nums[j])])
                    else:
                        d.add(nums[j])
        return res


print(Solution().threeSum([-1, 0, 1, 2, -1, -4]))
