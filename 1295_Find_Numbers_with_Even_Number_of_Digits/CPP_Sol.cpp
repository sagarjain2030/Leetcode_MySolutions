class Solution {
public:
    int findNumbers(vector<int>& nums) 
    {
        int even_count = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            int n = nums[i];
            if(!((to_string(n).length())&1))
                even_count++;
        }
        
        return even_count;
    }
};