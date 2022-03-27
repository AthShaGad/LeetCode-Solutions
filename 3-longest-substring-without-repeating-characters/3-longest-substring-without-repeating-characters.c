int lengthOfLongestSubstring(char * s){
    if(s[0]=='\0')
        return 0;
    if(s[1]=='\0')
        return 1; 
    int i=0;
    int j=0;
    int a[128];
    int max=0;
    int temp_max=0;
    label1: 
    for(int k=0;k<128;k++)
        a[k]=0;
    while(s[j]!='\0')
    {
        if(a[s[j]]==1)
        {
            temp_max=j-i;
            if(temp_max>max)
                max=temp_max;
            
            i++;
            j=i;
            goto label1;
        }
        a[s[j]]=1;
        j++;
        if(s[j]=='\0')
        {
            if((j-i)>max)
                max=j-i;
        }
    }
    
    if(max==0)
        max=j-i;
    return max;
}