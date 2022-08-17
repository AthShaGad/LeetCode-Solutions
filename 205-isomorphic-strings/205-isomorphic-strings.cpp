class Solution {
public:
    bool isIsomorphic(string s, string t) {
        string temp=t;
        unordered_map<char, int> str_map1;
        unordered_map<char, int> str_map2;
        for(int i=0;i<s.size();i++)
            str_map1[s[i]]=s[i]-t[i];
        for(int i=0;i<t.size();i++)
            temp[i]+=str_map1[s[i]];
        if(!(strcmp(s.c_str(),temp.c_str())==0))
            return false;
        else
            
        {
            for(int i=0;i<s.size();i++)
                str_map2[t[i]]=t[i]-s[i];
            for(int i=0;i<t.size();i++)
                s[i]+=str_map2[t[i]];
            if(!(strcmp(s.c_str(),t.c_str())==0))
                return false;
            return true;
        }
    }
};