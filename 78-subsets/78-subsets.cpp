class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
       return subsets(nums, nums.size());
    }
    public:
    vector<vector<int>> subsets(const vector<int>&nums, int n)
    {
        if(n==0)
        {
            vector<vector<int>>set1;
            vector<int> nullset;
            set1.push_back(nullset);
            return set1;
        }
        vector<vector<int>> set1=subsets(nums, n-1);
        vector<vector<int>> set2=set1;
        for(int i=0;i<set2.size();i++)
        {
            set2[i].push_back(nums[n-1]);
        }
        set1.insert(set1.end(), set2.begin(), set2.end());
        return set1;
    }
};