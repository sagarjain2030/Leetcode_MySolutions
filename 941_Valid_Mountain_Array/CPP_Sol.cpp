class Solution {
public:
    bool validMountainArray(vector<int>& arr) 
    {
        int len = arr.size();
        int i = 0;
        while((i+1) < len and arr[i] < arr[i+1])
            i++;
        if(i == 0 || i == len - 1)
            return false;
        while((i+1) < len and arr[i] > arr[i+1])
            i++;
        return i == len - 1;
    }
};