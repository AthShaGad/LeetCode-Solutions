class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        for(int i=0; i<s.size();i++)
        {
            if('A'<=s[i]&&s[i]<='Z')
                s1+=s[i]-'A'+'a';
            else if('a'<=s[i]&&s[i]<='z'||s[i]>='0' && s[i]<='9')
                s1+=s[i];
        }
        int i=0, j=s1.size()-1;
        if(s1.size()==0)
            return true;
        while(i<=j&&s1[i]==s1[j])
        {
            i++;
            j--;
        }
        if(i>=j)
            return true;
        return false;
    }
};