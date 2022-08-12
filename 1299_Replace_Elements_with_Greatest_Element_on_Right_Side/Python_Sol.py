class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        size = len(arr)
        max_elem = arr[size-1]
        arr[size-1] = -1
        for index in range(size - 2, -1, -1):
            new_max = max(max_elem, arr[index])
            arr[index] = max_elem
            max_elem = new_max
        return arr