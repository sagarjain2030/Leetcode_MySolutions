class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        sumLeft = 0
        n = len(nums)
        total = sum(nums)
        for i in range(n):
            sumRight = total - sumLeft - nums[i]
            if sumLeft == sumRight:
                return i
            sumLeft += nums[i]
        return -1