class Solution:
    def arraySign(self, nums: List[int]) -> int:
        if(len(nums) < 1):
            return 0
        count_Negative = 0
        for elem in nums:
            if(elem == 0):
                return 0
            else:
                if(elem < 0):
                    count_Negative += 1
        if (count_Negative % 2 != 0):
            return -1
        return 1