#include<string.h>
class Solution {
    
string getString(char x)
{
    string s(1, x);
    return s;  
}

bool isDistinct(vector<int>x)
{
    // cout<<"********************"<<endl;
    unordered_set<int>y;
    for(int i=0;i<x.size();i++)
    // {
        y.insert(x[i]);
        // cout<<x[i];
    // }
    return (x.size()==y.size());
}
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // cout<<"-------------------------------------------"<<endl;
       // int x=10;
        vector<int>x;
        for(int i =0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(strcmp(getString(board[i][j]).c_str(),".")!=0)
                    x.push_back(board[i][j]-'0');
            }
            // cout<<"@"<<endl;
            // cout<<x<<endl;
            if(!isDistinct(x))
                return false;
            else 
                x.clear();
        }
        
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(strcmp(getString(board[j][i]).c_str(),".")!=0)
                    x.push_back(board[j][i]-'0');
            }
            // cout<<"@"<<endl;
            // cout<<x<<endl;
            if(!isDistinct(x))
                return false;
            else 
                x.clear();
        }
        
//         int start_row=0;
//         int start_col=2;
        
//         for(int m=0;m<3;m++)
//         {
//             for(int i=0;i<3;i++)
//             {
//                 for (int j=0;j<3;j++)
//                 {
//                     if(strcmp(getString(board[3*start_col+i][3*start_col+j]).c_str(),".")!=0)
//                         x^=board[3*start_col+i][3*start_col+j]-'0';
//                 }
//             }
//             cout<<x<<endl;
//             if(x==0)
//                 return false;
//             x=10;
//             start_row++;
//             start_col++;
//         }
        
        int row=0;
        int col=0;
        for(int m=0;m<3;m++)
        {
            for(int n=0;n<3;n++)
            {
                for(int i=0;i<3;i++)
                {
                    for(int j=0;j<3;j++)
                    {
                        if(strcmp(getString(board[row+i][col+j]).c_str(), ".")!=0)
                            x.push_back(board[row+i][col+j]-'0');
                    }
                }
                // cout<<"@"<<endl;
                // cout<<x<<endl;
                if(!isDistinct(x))
                    return false;
                else
                    x.clear();
                row+=3;
            }
            col+=3;
            row=0;
        }
        return true;
    }
};