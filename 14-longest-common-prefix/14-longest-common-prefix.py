class Solution(object):
    def longestCommonPrefix(self, strs):
        min=0
        for i in range(len(strs)):
            if len(strs[i])<len(strs[min]):
                min=i
        
        pre=strs[min]
        for i in strs:
            j=0
            while j<len(i) and j<len(pre):
                if pre[j]==i[j]:
                    j+=1
                else:
                    pre=pre[0:j]
                    break
        return pre