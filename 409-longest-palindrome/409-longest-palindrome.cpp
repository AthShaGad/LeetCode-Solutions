class Solution {
public:
    int longestPalindrome(string s) {
        if(s.size()==1)
            return 1;
        unordered_map<char, int> mapping;
        for(int i=0;i<s.size();i++)
        {
            if(mapping.find(s[i])==mapping.end())
                mapping[s[i]]=1;
            else
                mapping[s[i]]++;
        }
        vector<int>freq_array;
        for(auto i:mapping)
            freq_array.push_back(i.second);
        sort(freq_array.begin(), freq_array.end());
        int sum=0;
        for(int i=freq_array.size()-1;i>=0;i--)
        {
            if(freq_array[i]%2!=0)
            {
                sum+=freq_array[i];
                freq_array[i]=0;
                break;
            }
        }
        for(int i=0;i<freq_array.size();i++)
        {
            if(freq_array[i]%2==0)
                sum+=freq_array[i];
            else
                sum+=(freq_array[i]/2)*2;
        }
        
        return sum;
    }
};