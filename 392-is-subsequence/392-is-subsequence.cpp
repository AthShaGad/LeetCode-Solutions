class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_index=0, t_index=0;
        while(s_index<s.size()&&t_index<t.size())
        {
            while(t_index<t.size()&&t[t_index]!=s[s_index])
                t_index++;
            if(s[s_index]==t[t_index])
            {
                s_index++;
                t_index++;
            }
            else
                return false;
        }
        if(s_index==s.size())
            return true;
        return false;
    }
};