class Solution:
    def checkIfExist(self, arr: List[int]) -> bool:
        seen = set()
        for elem in arr:
            if (2*elem) in seen or elem/2 in seen:
                return True
            seen.add(elem)
        return False