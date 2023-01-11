class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        int m = matrix.size(),n = matrix[0].size(), k = 0, l = 0;
        vector<vector<int>> is_visited;
        for(int i = 0; i < m; i++)
        {
            vector<int> temp;
            for(int j = 0; j < n; j++)
            {
                temp.push_back(false);
            }
            is_visited.push_back(temp);
            temp.clear();
        }
        int dir = 0,total_elem = m * n;
        vector<int> result;
        while(total_elem)
        {
            if(dir == 0)
            {
                if(l > n-1 or is_visited[k][l] == true)
                {
                    dir = 1;
                    l -= 1;
                    k += 1;
                }
                else
                {
                    result.push_back(matrix[k][l]);
                    is_visited[k][l] =true;
                    l += 1;
                    total_elem -= 1;
                }
            }
            else if(dir == 1)
            {
                if(k > m-1 or is_visited[k][l] == true)
                {
                    dir = 2;
                    k -= 1;
                    l -= 1;
                }
                else
                {
                    result.push_back(matrix[k][l]);
                    is_visited[k][l] = true;
                    k += 1;
                    total_elem -= 1;
                }
            }
            else if(dir == 2)
            {
                if(l < 0 or is_visited[k][l] == true)
                {
                    dir = 3;
                    k -= 1;
                    l += 1;
                }
                else
                {
                    result.push_back(matrix[k][l]);
                    is_visited[k][l] = true;
                    l -= 1;
                    total_elem -= 1;
                }
            }
            else if(dir == 3)
            {
                if(k < 0 or is_visited[k][l] == true)
                {
                    dir = 0;
                    k += 1;
                    l += 1;                   
                }
                else
                {
                    result.push_back(matrix[k][l]);
                    is_visited[k][l] = true;
                    k -= 1;
                    total_elem -= 1;
                }
            }
        }
        return result;
    }
};