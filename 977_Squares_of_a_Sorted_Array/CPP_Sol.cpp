class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        vector<int> result;
        int left = 0, right = nums.size()-1;
        int ptr = right;
        while(ptr > -1)
        {
            int l = pow(nums[left],2),r = pow(nums[right],2);
            if(l < r)
            {
                result.push_back(r);
                right--;
            }
            else
            {
                result.push_back(l);
                left++;                
            }
            ptr--;
        }
        reverse(result.begin(),result.end());
        return result;
    }
};