class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ret_vect;
        vector<string>strs_copy=strs;
        vector<string>temp;
        for(int i=0;i<strs.size();i++)
            sort(strs[i].begin(), strs[i].end());
        map<string, vector<int>>word_occurences_index;
        for(int i=0;i<strs.size();i++)
            word_occurences_index[strs[i]].push_back(i);
        for(auto i:word_occurences_index)
        {
            for(auto j:i.second)
                temp.push_back(strs_copy[j]);
            ret_vect.push_back(temp);
            temp.clear();
                
        }
        return ret_vect;
    }
};