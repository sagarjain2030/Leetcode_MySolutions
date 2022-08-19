class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        expected = sorted(heights)
        count = 0
        for index in range(len(heights)):
            if(heights[index] != expected[index]):
                count += 1
        return count
        