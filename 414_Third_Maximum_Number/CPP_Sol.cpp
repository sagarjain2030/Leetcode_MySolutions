class Solution 
{
public:
    int thirdMax(vector<int>& nums) 
    {
        std::set<int> tempSet;
        for(int i = 0; i < nums.size(); i++)
            tempSet.insert(nums[i]);
        if(tempSet.size() < 3)
            return *(tempSet.rbegin());
        int i = 1;
        while(i < 3)
        {
            tempSet.erase(*tempSet.rbegin());
            i++;
        }
        return *(tempSet.rbegin());
    }
};