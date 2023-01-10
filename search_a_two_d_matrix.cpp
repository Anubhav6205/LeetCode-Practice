/*Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.*/*/
class Solution {
public:
    
    bool bs(vector<vector<int>> matrix, int i, int target, int l, int r)
{
    if (l > r)
    {
        return false;
    }

    int mid = (l + r) / 2;
    if (matrix[i][mid] == target)
    {
        return true;
    }
    else if (matrix[i][mid] > target)
    {
        return bs(matrix, i, target, l, mid - 1);
    }

    return bs(matrix, i, target, mid + 1, r);
} 
    
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         
    int i, j;
    bool found = false;
    for (i = 0; i < matrix.size(); i++)
    {
     
        if (matrix[i][matrix[i].size() - 1] >= target)
        {
            if (bs(matrix, i, target, 0, matrix[i].size()))
            {
              
                return true;
            }
            else
            {
              
                return false;
            }
        }

    }
                return found;
        
    }
};