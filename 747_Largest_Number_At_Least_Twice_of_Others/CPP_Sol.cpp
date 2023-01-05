class Solution {
public:
    int dominantIndex(vector<int>& nums) 
    {
        if(nums.size() < 2)
            return -1;   
        int first_large_num,second_large_num;
        first_large_num = second_large_num = -1;
        for(auto v : nums)
        {
            if(first_large_num < v)
            {
                second_large_num = first_large_num;
                first_large_num = v;
            }
            else if(second_large_num < v)
                second_large_num = v;
        }     
        int return_index = -1;
        if(first_large_num >= (2 * second_large_num))
        {
            for(int i = 0; i < nums.size();i++)
            {
                if(nums[i] == first_large_num)
                    return i; 
            }
        }
        return return_index;  
    }
};