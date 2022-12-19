class Solution {
public:
    int pivotIndex(vector<int>& nums)
    {
        int sumLeft = 0;
        int total = std::accumulate(nums.begin(),nums.end(),0);
        for(int i = 0; i < nums.size(); i++)
        {
           int sumRight = total - sumLeft - nums[i];
           if(sumRight == sumLeft)
                return i;
           sumLeft += nums[i];
        }
        return -1;
    }
};