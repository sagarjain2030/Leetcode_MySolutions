class Solution:
    def addBinary(self, a: str, b: str) -> str:
        if(len(a) < len(b)):
            return self.addBinary(b,a)
        m,n = len(a),len(b)
        result = []
        carry = 0
        while(n):
            c,d = int(a[m-1]),int(b[n-1])
            e = int(a[m-1]) + int(b[n-1]) + carry
            e, carry = e % 2, e // 2
            result.append(e)
            m -= 1
            n -= 1
        while(m):
            e = int(a[m-1]) + carry
            e, carry = e % 2, e // 2
            result.append(e)
            m -= 1
        if(carry == 1):
            result.append(carry)
        result.reverse()
        s = "".join(str(x) for x in result)
        return s
    
    def get_e_and_c(self,e,carry):
        return e % 2,e // 2