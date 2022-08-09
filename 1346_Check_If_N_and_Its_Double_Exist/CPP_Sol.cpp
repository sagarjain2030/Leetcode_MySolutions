class Solution {
public:
    bool checkIfExist(vector<int>& arr)
    {
        std::set<double> seen;
        for(int i = 0; i < arr.size(); i++)
        {
            if((seen.count(arr[i] * 2) == 1) || (seen.count(arr[i]/ 2.0) == 1))
                return true;
            seen.insert(arr[i]);
        }
        return false;
    }
};