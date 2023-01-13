class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        result = []
        self.pascal_triangle(numRows,result)
        return result 
    
    def pascal_triangle(self,numRows,result):
        if(numRows == 1):
            result.append([1])
        elif(numRows == 2):
            self.pascal_triangle(numRows - 1,result)
            result.append([1,1])
        else:
            self.pascal_triangle(numRows - 1,result)
            prev_result = result[-1]
            curr_result = []
            curr_result.append(1)
            for n in range(len(prev_result) - 1):
                curr_result.append(prev_result[n] + prev_result[n+1])
            curr_result.append(1)
            result.append(curr_result)
        return result