class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>a;
        if(nums.size()<3)
            return a;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            // int a=nums[i];
            int r=nums.size()-1;
            if(i>0)
            {
                if(nums[i]==nums[i-1])
                {
                    while(nums[i]==nums[i-1]&&i<nums.size()-2)
                        i++;
                }
            }
            int l=i+1;
            while(l<r)
            {
                int sum3=nums[i]+nums[l]+nums[r];
                if(sum3==0)
                {
                    vector<int>x;
                    x.push_back(nums[i]);
                    x.push_back(nums[l]);
                    x.push_back(nums[r]);
                    a.push_back(x);
                    r=nums.size()-1;
                    l++;
                    if(nums[l]==nums[l-1])
                        {
                            while(nums[l]==nums[l-1]&&l<r)
                            l++;
                        }
                }
                else if(sum3>0)
                {
                        r--;
                }
                else
                {
                        l++;
                        if(nums[l]==nums[l-1])
                        {
                            while(nums[l]==nums[l-1]&&l<r)
                                l++;
                        }
                }
            
            }
        }
        return a;
};};