class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // int i=0, j=0,k=0;
        // while(i<m+n)
        // {
        //     if(nums1[i]<nums2[j])
        //     {
        //         i++;
        //         //m++;
        //     }
        //     else if(nums1[i]>nums2[j])
        //     {
        //         k=m-1;
        //         // int x=nums1[m-1];
        //         while(k>=i)
        //         {
        //             nums1[k+1]=nums1[k];
        //             k--;
        //         }
        //         // nums1[m]=x;
        //         nums1[i]=nums2[j];
        //         j++;
        //         i++;
        //         //m++;
        //     }
        int i=m;
        int j=0;
        while(i<m+n)
        {
            nums1[i]=nums2[j];
            i++;
            j++;
        }
        sort(nums1.begin(), nums1.end());
        
        
    }
};