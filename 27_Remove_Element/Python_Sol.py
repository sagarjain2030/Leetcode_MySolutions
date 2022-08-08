class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        i = 0
        for index, elem in enumerate(nums):
            if(elem != val):
                nums[i] = elem
                i += 1
        return i