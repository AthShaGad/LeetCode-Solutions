class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int no_of_rows=matrix.size();
        int no_of_columns=matrix[0].size();
        for(int i=0;i<no_of_rows;i++)
        {
            if(target>=matrix[i][0]&&target<=matrix[i][no_of_columns-1])
            {
                for(int j=0;j<no_of_columns;j++)
                {
                    if(matrix[i][j]==target)
                        return true;
                }
                return false;
            }
        }
        return false;
    }
};