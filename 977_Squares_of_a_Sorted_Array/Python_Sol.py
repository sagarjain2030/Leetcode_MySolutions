class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        '''
        result = []
        for elem in nums:
            result.append(elem**2)
        return sorted(result)
        '''
        # O(n) solution
        
        result = [0] * len(nums)
        left = 0
        right = len(nums) - 1
        ptr = right
        while ptr >= 0:
            l = nums[left] ** 2
            r = nums[right] ** 2
            if l < r:
                result[ptr] = r
                right -= 1
            else:
                result[ptr] = l
                left += 1
            ptr -= 1
        return result
