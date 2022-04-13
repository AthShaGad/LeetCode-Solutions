class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // //Simple approach
        // for(int i=1;i<nums.size();i++)
        //     nums[0]^=nums[i];// XOR
        // return nums[0];
        set<int> set1;
        for(int i:nums)
            set1.insert(i);
        int sum1=0, sum2=0;
        for(int i:set1)
            sum1+=2*i;
        for(int i:nums)
            sum2+=i;
        return sum1-sum2;
    }
};