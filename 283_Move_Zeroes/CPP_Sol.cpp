class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int i = 0, j = 0;
        while(true)
        {
            if(nums[i] != 0)
            {
                nums[j] = nums[i];
                j++;
            }
            i++;
            if(i >= nums.size())
                break;
        }
        for(int k = j; k < nums.size(); k++)
            nums[k] = 0;
    }
};