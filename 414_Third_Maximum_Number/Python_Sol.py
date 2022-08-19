class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        nums_set = set(nums)
        if(len(nums_set) < 3):
            return max(nums_set)
        i = 1
        while(i < 3):
            nums_set.remove(max(nums_set))
            i += 1
        return max(nums_set)
        