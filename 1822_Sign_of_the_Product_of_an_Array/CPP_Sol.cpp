class Solution {
public:
    int arraySign(vector<int>& nums) 
    {
        int count_negative = 0;
        for(auto number : nums)
        {
            if(number == 0)
                return 0;
            if(number < 0)
                count_negative++;
        }
        
        if(count_negative % 2 != 0)
            return -1;
        return 1;
    }
};