class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) 
    {
        int len = arr.size();
        int max_elem = arr[len-1];
        arr[len-1] = -1;
        for(int index = len - 2; index > -1; index--)
        {
            int new_max = (max_elem < arr[index]) ? arr[index] : max_elem;
            arr[index] = max_elem;
            max_elem = new_max;
        } 
        return arr;            
    }
};