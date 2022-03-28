class Solution 
{
public:
//     string longestPalindrome(string s) 
//     {
//         int len = (sizeof(s)/sizeof(char))-1;
//         cout<<(len);
//         int max=0;
//         int left, right;
//         if(len==1)
//             return s;
//         else
//         {
//             for(int i=1;i<len;i++)
//             {
//                 int mid= i;
//                 int r=i-1;
//                 int l=i+1;
//                 while(r>=0 && l<len)
//                 {
//                     if(s[r]==s[l])
//                     {
//                         r--;
//                         l++;
//                     }   
//                     else
//                         break;
//                 }
//                 if((l-r+1)>max)
//                 {
//                         left=l;
//                         right=r;
//                 }    
//             }
//             return s.substr(right, left-right+1);
//             //return s;
//         }
            
//     }
    
    string longestPalindrome(string s) 
    {
        int l=0, r=s.size()-1,x=0;
        if(s.size()==1)
            return s;
        string max=s.substr(0,1);
        while(l<r)
        {
            r=s.size()-1;
            int curr_l=l;
            int curr_r=r;
            while(curr_l<curr_r)
            {
                if(s[curr_l]==s[curr_r])
                {
                    // cout<<curr_l<<" "<<curr_r<<endl;
                    int curr_curr_l=curr_l;
                    int curr_curr_r=curr_r;
                    while(s[curr_l]==s[curr_r]&&curr_l<curr_r)
                    {
                        curr_l++;
                        curr_r--;
                    }
                    // cout<<curr_l<<" "<<curr_r<<endl;
                    if(s[curr_l]==s[curr_r])
                    {
                        // cout<<s[curr_l]<<" "<<s[curr_r]<<endl;
                        // cout<<curr_curr_l<<" "<<curr_curr_r<<endl;
                        // cout<<max<<endl;
                        if(max.size()<(curr_curr_r-curr_curr_l+1))
                        {
                            //substr(start_pos, len(total len of string including start_pos)); 
                            max=s.substr(curr_curr_l, (curr_curr_r-curr_curr_l+1));
                            
                        }
                    }
                   curr_r=curr_curr_r;
                   curr_l=curr_curr_l;
                }
                    curr_r--;
            }
            // cout<<curr_r<<endl;
            l++;
        }
        return max;
    }
};