class Solution {
public:
    string convert(string s, int numRows) {
        // string s1;
        if(numRows==1||numRows>=s.size())
            return s;
        // int init_skip, i=0, ctr_len=0, inter_skip;
//         if(numRows%2!=0)
//         {
//             inter_skip=numRows-1;
//             init_skip=numRows+1;
//         }
        
//         else
//         {
//             inter_skip=numRows;
//             init_skip=numRows+2;
//         }
        // inter_skip=numRows-1;
        // init_skip=numRows-1+inter_skip;
        // for(int i=0;i<numRows;i++)
        // {
        //     if(i==0||i==numRows-1)
        //     {
        //         int j=i;
        //         while(j<s.size())
        //         {
        //             s1+=s[j];
        //             ctr_len++;
        //             j+=init_skip;
        //         }
        //     }
        //     else
        //     {
        //         int j=i;
        //         int flag=1;
        //         while(1)
        //         {
        //             if(flag==1)
        //             {
        //                 if(j<s.size())
        //                 {
        //                     s1+=s[j];
        //                     j+=inter_skip;
        //                     ctr_len++;
        //                     flag=0;
        //                 }
        //                 else
        //                     break;
        //             }
        //             else
        //             {
        //                 if(j<s.size())
        //                 {
        //                     s1+=s[j];
        //                     j+=(init_skip-inter_skip);
        //                     ctr_len++;
        //                     flag=1;
        //                 }
        //                 else 
        //                     break;
        //             }
        //         }
        //         inter_skip-=2;
        //     }
        // }
        // return s1;
        
        vector<string>rows(numRows);
        int row_no=0;
        for(int i=0;i<s.size();i++)
        {
            if(row_no==numRows)
            {
                row_no-=2;
                while(row_no>=0&&i<s.size())
                {
                    rows[row_no]+=s[i];
                    // cout<<row_no;
                    cout<<s[i];
                    i++;
                    row_no--;
                    if(row_no<0)
                        i--;
                }
            }
            else
            {
                if(row_no==-1)
                    row_no=1;
                rows[row_no]+=s[i];
                row_no++;
            }
        }
        string s1;
        for(int i=0;i<numRows;i++)
        {
            for(int j=0;j<rows[i].size();j++)
                s1+=rows[i][j];
        }
        return s1;
    }
};