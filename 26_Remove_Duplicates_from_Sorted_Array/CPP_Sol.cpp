class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int i = 1;
        for(int index = 1; index < nums.size(); index++)
        {
            if(nums[index] != nums[index-1])
            {
                nums[i] = nums[index];
                i++;
            }
        }
        return i;
    }
};