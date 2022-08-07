class Solution:
    def duplicateZeros(self, arr: List[int]) -> None:
        """
        Do not return anything, modify arr in-place instead.
        """
        new_arr = []
        total_size = len(arr)
        for elem in arr:
            if elem != 0:
                new_arr.append(elem)
            else:
                new_arr.append(elem)
                new_arr.append(0)
            if len(new_arr) >= total_size:
                break
        arr.clear()
        i = 0
        while(i < total_size):
            arr.append(new_arr[i])
            i += 1