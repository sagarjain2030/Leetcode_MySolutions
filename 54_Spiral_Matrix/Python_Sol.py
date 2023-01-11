class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        m,n = len(matrix),len(matrix[0])
        is_visited = []
        for _ in range(m):
            temp = []
            for _ in range(n):
                temp.append(False)
            is_visited.append(temp)
        dir = 0
        total_elem = m*n
        k,l = 0,0
        result = []
        while(total_elem):
            if(dir == 0):
                if(l > n-1 or is_visited[k][l] == True):
                    dir = 1
                    l -= 1
                    k += 1
                else:
                    result.append(matrix[k][l])
                    is_visited[k][l] = True
                    l += 1
                    total_elem -= 1
            elif(dir == 1):
                if(k > m-1 or is_visited[k][l] == True):
                    dir = 2
                    k -= 1
                    l -= 1
                else:
                    result.append(matrix[k][l])
                    is_visited[k][l] = True
                    k += 1
                    total_elem -= 1
            elif(dir == 2):
                if(l < 0 or is_visited[k][l] == True):
                    dir = 3
                    k -= 1
                    l += 1
                else:
                    result.append(matrix[k][l])
                    is_visited[k][l] = True
                    l -= 1
                    total_elem -= 1
            elif(dir == 3):
                if(k < 0 or is_visited[k][l] == True):
                    dir = 0
                    k += 1
                    l += 1
                else:
                    result.append(matrix[k][l])
                    is_visited[k][l] = True
                    k -= 1
                    total_elem -= 1
        return result