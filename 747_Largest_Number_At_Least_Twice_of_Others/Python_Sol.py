class Solution:
    def dominantIndex(self, nums: List[int]) -> int:
        max_large_index = second_max_index = -1
        for i in range(len(nums)):
            if(max_large_index == -1 or nums[max_large_index] < nums[i]):
                second_max_index = max_large_index
                max_large_index = i
            elif(nums[second_max_index] < nums[i]):
                second_max_index = i
            else:
                pass
        if(nums[max_large_index] >= 2*nums[second_max_index]):
            return max_large_index
        else:
            return -1