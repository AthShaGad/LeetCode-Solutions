class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        int m=(l+r)/2;
        if(nums.size()<3)
        {
            if(nums.size()==0)
                return -1;
            else if(nums.size()==1)
            {
                if(nums[0]==target)
                    return 0;
                return -1;
            }
            else
            {
                if(nums[0]==target)
                    return 0;
                else if(nums[1]==target)
                    return 1;
                return -1;
            }
        }
        // while(l<=r)
        // {
        //     if(nums[m]==target)
        //         return m;
        //     if(l==m&&nums[m]!=target)
        //         return -1;
        //     if(nums[m-1]>nums[m]||nums[m+1]<nums[m])
        //     {
        //         if(target>nums[r])
        //             r=m-1;
        //         else
        //             l=m+1;
        //     }
        //     else
        //     {
        //         if(target<nums[m])
        //             r=m-1;
        //         else
        //             l=m+1;
        //     }
        //     m=(l+r)/2;
        // }
//         while(l<=r)
//         {
//             if(nums[m]==target)
//                 return m;
//             if(l==r&&nums[m]!=target)
//                 return -1;
//             if(nums[m+1]<=target||target<=r)
//                 l=m+1;
//             else
//                 r=m-1;
                
//             m=(l+r)/2;
//         }
        while(l<=r)
        {
            if(nums[m]==target)
                return m;
            if(l==r&&nums[m]!=target)
                return -1;
            
            if(nums[m+1]<nums[m]||nums[m-1]>nums[m])
            {
                if(target>nums[r])
                    r=m-1;
                else
                    l=m+1;
            }
            else
            {
                if(nums[m+1]<nums[r])
                {
                    if(target>=nums[m+1]&&target<=nums[r])
                        l=m+1;
                    else
                        r=m-1;
                }
                else
                {
                    if(target<=nums[m-1]&&target>=nums[l])
                        r=m-1;
                    else
                        l=m+1;
                }
            }
            if((l+r)<2)
            {
                if(nums[0]==target)
                    return 0;
                else if(nums[1]==target)
                    return 1;
                return -1;
            }
            m=(l+r)/2;
        }
        
        return -1;
    }
};