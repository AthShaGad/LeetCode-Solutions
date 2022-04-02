class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
//         First transpose then flip horizontally
        
//         For transpose
        int n=matrix[0].size();
        for(int i=0;i<matrix[0].size();i++)
        {
            for(int j=matrix[0].size()-n;j<matrix[0].size();j++)
            {
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
            n--;
        }
        
        
//         Flip horizontally
        for(int i=0;i<matrix[0].size();i++)
        {
            for(int j=0;j<matrix[0].size()/2;j++)
            {
                int temp=matrix[i][j];
                matrix[i][j]=matrix[i][matrix.size()-1-j];
                matrix[i][matrix.size()-1-j]=temp;
            }
        }
    }
};