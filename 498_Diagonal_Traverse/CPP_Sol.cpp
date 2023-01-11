class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int left =0, right = 0, numZeroes = 0;
        int longest_sequence = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[right] == 0)
                numZeroes++;
            while(numZeroes == 2)
            {
                if(nums[left] == 0)
                    numZeroes--;
                left++;
            }
            
            if(longest_sequence < (right - left + 1))
                longest_sequence = right - left + 1;
            right++;
        }
        return longest_sequence;
    }
};