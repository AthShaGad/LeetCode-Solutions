class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        //Sort an array

        int n=nums.size();
        int l=nums[0], u=nums[0];
        for(int i=1;i<n;i++)
        {
            l=(nums[i]<l)?nums[i]:l;
            u=max(u, nums[i]);
        }
        int m=u-l+1;
        vector<int> d(u-l+1);
        for(int i=0;i<d.size();i++) 
            d[i]=0;

        for(int i=0;i<n;i++)
        {
            d[nums[i]-l]++;
        }
        int prev=0;
        for(int i=0;i<d.size();i++)
        {
            int temp=prev+d[i];
            d[i]=prev;
            prev=temp;
        }
        vector<int> sorted(n);
        for(int i=0;i<n;i++)
        {
            sorted[d[nums[i]-l]]=nums[i];
            d[nums[i]-l]++;
        }
        return sorted;
    }
};






