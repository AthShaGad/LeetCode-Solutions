class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> allpermutations;
        do{
            allpermutations.push_back(nums);
        }while(nextPermutation(nums));
        return allpermutations;
    }
    public:
    bool nextPermutation(vector<int>& nums) {
      int n=nums.size();
    int i=n-2;
    //i is the largest index such that nums[i]<nums[i+1]
    while(i>=0 && nums[i]>=nums[i+1])
        i--;
    //j is the largest index such that nums[j]>nums[i]
    int j=n-1;
    if(i==-1)
        return false;//the last permutation
    else
    {
        while(nums[j]<=nums[i])
            j--;
        swap(nums[i],nums[j]);
    }

   

    //reverse [i+1,n-1]
    int p1=i+1, p2=n-1;
    while(p1<p2)
    {
        swap(nums[p1], nums[p2]);
        p1++;
        p2--;
    }  
    return true;
    }
};