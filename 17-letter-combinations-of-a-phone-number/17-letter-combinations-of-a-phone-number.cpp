class Solution {
public:
    
    vector<string> letterCombinations(string digits) {
        map<char, vector<string>> converter;
        // converter[""]={};
        converter['2']={"a","b","c"};
        converter['3']={"d","e","f"};
        converter['4']={"g","h","i"};
        converter['5']={"j","k","l"};
        converter['6']={"m","n","o"};
        converter['7']={"p","q","r","s"};
        converter['8']={"t","u","v"};
        converter['9']={"w","x","y","z"};
        
        vector<string>retVec;
        if(digits.size()==0)
            return {};
        else
        {
            for(int i=0;i<digits.size();i++)
            {
                if(retVec.size()==0)
                {
                    for(int j=0;j<converter[digits[i]].size();j++)
                        retVec.push_back(converter[digits[i]][j]);
                }
                else
                {
                    vector<string>temp;
                    for(int j=0;j<converter[digits[i]].size();j++)
                    {
                        for(int k=0;k<retVec.size();k++)
                            temp.push_back(retVec[k]+converter[digits[i]][j]);
                    }
                    retVec=temp;
                }
            }
        }
        return retVec;
    }
};