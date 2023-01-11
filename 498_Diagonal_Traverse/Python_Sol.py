class Solution:
    def findDiagonalOrder(self, mat: List[List[int]]) -> List[int]:
        m, n, r, c, res, goingUp = len(mat), len(mat[0]), 0, 0, [], True
        while r < m and c < n:
            res.append(mat[r][c])
            if goingUp:
                if (r - 1) < 0 or (c + 1) >= n:
                    if c + 1 < n:
                        c += 1
                    else:
                        r += 1
                    goingUp = not goingUp
                else:
                    r -= 1
                    c += 1
            else:
                if (r + 1) >= m or (c - 1) < 0:
                    if (r+1) < m:
                        r += 1
                    else:
                        c += 1
                    goingUp = not goingUp
                else:
                    r += 1
                    c -= 1
        return res