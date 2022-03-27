class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>a;
        if(nums.size()<4)
            return a;
        
        for(int i=0;i<nums.size()-3;i++)
        {
            if(i>0)
            {
                if(nums[i]==nums[i-1])
                {
                    while(nums[i]==nums[i-1]&&i<nums.size()-3)
                        i++;
                }
            }
            for(int j=i+1;j<nums.size()-2;j++)
            {
                if(j>i+1)
                {
                    if(nums[j]==nums[j-1])
                    {
                        while(nums[j]==nums[j-1]&&j<nums.size()-2)
                            j++;
                    }
                }
                int l=j+1;
                int r=nums.size()-1;
                while(l<r)
                {
                    if(nums[i]>INT_MAX||nums[j]>INT_MAX||nums[l]>INT_MAX||nums[r]>INT_MAX)
                        break;
                    if(nums[i]<INT_MIN||nums[j]<INT_MIN||nums[l]<INT_MIN||nums[r]<INT_MIN)
                        break;
                    int sum4=nums[i];//+nums[j]+nums[l]+nums[r];
                    if((sum4/10)+(nums[j]/10)>INT_MAX/10||(sum4/10)+(nums[j]/10)<INT_MIN/10)
                        break;
                    else
                        sum4+=nums[j];
                    if((sum4/10)+(nums[j]/10)>INT_MAX/10||(sum4/10)+(nums[l]/10)<INT_MIN/10)
                        break;
                    else
                        sum4+=nums[l];
                    if((sum4/10)+(nums[j]/10)>INT_MAX/10||(sum4/10)+(nums[r]/10)<INT_MIN/10)
                        break;
                    else
                        sum4+=nums[r];
                    
                    if(sum4==target)
                    {
                        vector<int>x;
                        x.push_back(nums[i]);
                        x.push_back(nums[j]);
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
                    else if(sum4<target)
                    {
                        l++;
                        if(nums[l]==nums[l-1])
                        {
                            while(nums[l]==nums[l-1]&&l<r)
                                l++;
                        }
                    }
                    else if(sum4>target)
                    {
                        r--;
                    }
                }
            }
        }
                    return a;
    }
};