class Solution(object):
    def detectCapitalUse(self, word):
        i=1
        cap=0
        small=0
        if len(word)==2:
            if word[0]>='a' and word[0]<='z':
                if word[1]>='a' and word[1]<='z':
                    return True
                else:
                    return False
            else:
                return True
        else:
            while i <(len(word)):
                if word[0]>='A' and word[0]<='Z':
                    if word[i]>='a' and word[i]<='z':
                        small=1
                    else:
                        cap=1
                else:
                    if word[i]>="A" and word[i]<="Z":
                        return False
                    else:
                        pass
                i+=1
            if small==1 and cap==1:
                return  False
            else:
                return True