class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int carry = 1;
        int i  = digits.size() - 1;
        while(carry == 1 && i > -1)
        {
            int new_sum = digits[i] + carry;
            digits[i] = new_sum % 10;
            carry = new_sum / 10;
            i--;
        }
        if(carry == 1)
            digits.insert(digits.begin(), carry);
        return digits;
    }
};