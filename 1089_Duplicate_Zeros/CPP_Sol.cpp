class Solution {
public:
    void duplicateZeros(vector<int>& arr) 
    {
        
        vector<int> new_arr;
        int old_size = arr.size();
        for(int i = 0;i < old_size; i++)
        {
            new_arr.push_back(arr[i]);
            if(arr[i] == 0)
              new_arr.push_back(arr[i]);  
            if(new_arr.size() >= old_size)
                break;
        }
        for(int i = 0; i < old_size; i++)
        {
            arr[i] = new_arr[i];
        }
    }
};