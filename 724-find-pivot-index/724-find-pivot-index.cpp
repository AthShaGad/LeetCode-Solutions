class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int middle=1, left=0, right=0;
        int sum=0;
        for(int i=1;i<nums.size();i++)
            sum+=nums[i];
        if(sum==0)
            return 0;
        left=nums[0];
        for(int i=middle+1;i<nums.size();i++)
            right+=nums[i];
        while(middle<nums.size()-1)
        {
            // left=0, right=0;
            // for(int i=0;i<middle;i++)
            //     left+=nums[i];
            // for(int i=middle+1;i<nums.size();i++)
            //     right+=nums[i];
            if(left==right)
                return middle;
            else
            {
                left+=nums[middle];
                right-=nums[middle+1];
                middle++;
            }
        }
        sum-=nums[nums.size()-1];
        sum+=nums[0];
        if(sum==0)
            return nums.size()-1;
        return -1;
    }
};