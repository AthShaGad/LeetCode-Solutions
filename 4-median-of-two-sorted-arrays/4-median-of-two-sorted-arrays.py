class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        l1=[]
        for i in nums1:
            l1.append(i)
        for i in nums2:
            l1.append(i)
        l1.sort()
        if len(l1)%2!=0:
            return l1[(len(l1)/2)]
        return ((float(l1[(len(l1)/2)-1])+float(l1[(len(l1)/2)]))/2)