class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        int m;
        int left_most, right_most;
        bool present=false;
        vector<int> left, right;
        vector<int>x={-1,-1};
        while(l<=r)
        {
            m=(l+r)/2;
            if(target==nums[m])
            {
                left.push_back(m);
                present=true;
            }
            if(target<=nums[m])
                r=m-1;
            else
                l=m+1;
        }
        if(present)
        {
            left_most=left[left.size()-1];
            l=0;
            r=nums.size()-1;
            while(l<=r)
            {
                m=(l+r)/2;
                if(target==nums[m])
                    right.push_back(m);
                if(target>=nums[m])
                    l=m+1;
                else
                    r=m-1;
            } 
            right_most=right[right.size()-1];
            x[0]=left_most;
            x[1]=right_most;
        }
        return x;
    }
};