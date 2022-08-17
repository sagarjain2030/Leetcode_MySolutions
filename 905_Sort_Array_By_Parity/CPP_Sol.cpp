class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        vector<int> result_array;
        for(auto elem : nums)
        {
            if(elem & 1)
                result_array.push_back(elem);
            else
                result_array.insert(result_array.begin(), elem);
        }
        return result_array;
    }
};