def qsort(nums, left, right):
    i, j = left, right
    if left < right:
        tmp = nums[i]
        while i < j:
            while i < j and nums[j] > tmp:
                j -= 1
            if i < j:
                nums[i] = nums[j]
                i += 1
            while i < j and nums[i] < tmp:
                i += 1
            if i < j:
                nums[j] = nums[i]
                j -= 1

        nums[i] = tmp
        qsort(nums, left, i - 1)
        qsort(nums, i + 1, right)


def qsort(nums, left, right):
    if left < right:
        i, j = left, right
        tmp = nums[i]
        while i < j:
            while i < j and nums[j] > tmp:
                j -= 1
            if i < j:
                nums[j] = nums[i]
                i += 1
            while i < j and nums[i] < tmp:
                i += 1
            if i < j:
                nums[i] = nums[j]
                j -= 1
        nums[i] = tmp
        qsort(nums, left, i - 1)
        qsort(nums, i + 1, right)


def bubble(nums):

    for i in range(0, len(nums)):
        for j in range(1, i):
            if nums[j - 1] > nums[j]:
                nums[j], nums[j - 1] = nums[j - 1], nums[j]


nums = [1, 1, 2, 4, 5, 9, 6, 8, 7]
qsort(nums, 0, len(nums) - 1)
# bubble(nums)
print(nums)
