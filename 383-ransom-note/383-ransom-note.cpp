class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mapping;
        for(int i=0;i<ransomNote.size();i++)
            mapping[ransomNote[i]]++;
        for(int i=0;i<magazine.size();i++)
        {
            if(mapping.find(magazine[i])!=mapping.end())
                mapping[magazine[i]]--;
        }
        for(auto i:mapping)
        {
            if(i.second>0)
                return false;
        }
        return true;
    }
};