class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        carry = 1
        i = len(digits) - 1
        while(carry == 1 and i > -1):
            new_sum = digits[i] + carry
            digits[i] = new_sum % 10
            carry = new_sum // 10
            i -= 1
        if(carry == 1):
            digits.insert(0,carry)
        return digits