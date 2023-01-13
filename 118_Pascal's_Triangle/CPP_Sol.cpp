class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> result;
        pascal_triangle(numRows, result);
        return result;        
    }

    void pascal_triangle(int numRows, vector<vector<int>>& result)
    {
         if(numRows == 1)
         {
             vector<int>  curr_result;
             curr_result.push_back(1);
             result.push_back(curr_result);
         }
        else if(numRows == 2)
        {
            vector<int>  curr_result;
            pascal_triangle(numRows - 1,result);
            curr_result.push_back(1);
            curr_result.push_back(1);
            result.push_back(curr_result);
        }
        else
        {
            pascal_triangle(numRows - 1,result);
            vector<int> prev_result = result.back();
            vector<int>  curr_result;
            curr_result.push_back(1);
            for(int i = 0;i < prev_result.size() - 1; i++)
                curr_result.push_back(prev_result[i] + prev_result[i+1]);
            curr_result.push_back(1);
            result.push_back(curr_result);
        }
    }
};