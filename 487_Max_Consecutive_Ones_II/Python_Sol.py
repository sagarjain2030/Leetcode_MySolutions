class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        left , right = 0 , 0
        numZeroes = 0
        longest_Sequence = 0
        while(right < len(nums)):
            if(nums[right] == 0):
                numZeroes += 1
            while(numZeroes == 2):
                if(nums[left] == 0):
                    numZeroes -= 1
                left += 1
            longest_Sequence = max(longest_Sequence, right - left + 1)
            right += 1
        return longest_Sequence