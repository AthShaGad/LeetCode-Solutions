class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int x=1;
        int i=0,j=1;
        while(i<nums.size()&&j<nums.size())
        {
            if(nums[i]==nums[j])
                j++;
            else
            {
                nums[x]=nums[j];
                x++;
                i=j;
            }
        }
        return x;
    }
};