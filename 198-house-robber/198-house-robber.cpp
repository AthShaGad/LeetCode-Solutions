class Solution {
private:
    int max(int a, int b)
    {
        return (a>b)?a:b;
    }
public:
    int rob(vector<int>& nums) {
        vector<int> max_amount;
        max_amount.push_back(0);
        max_amount.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
            max_amount.push_back(max(max_amount[i], nums[i]+max_amount[i-1]));
        return max_amount[max_amount.size()-1];
    }
};