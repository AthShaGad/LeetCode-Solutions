class Solution {
public:
    int countSubstrings(string s) {
      int left, right, count=0;
        if(s.size()==1)
            return 1;
      for(int i=0;i<s.size();i++)
      {
          for(int j=0;j<s.size()-i;j++)
          {
              left=j;
              right=left+i;
              while(left<right&&s[left]==s[right])
              {
                  left++;
                  right--;
              }
              if(s[left]==s[right])
                  count++;
          }
      }
        return count;
    }
};