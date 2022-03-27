class Solution
{
public:
    int myAtoi(string s)
    {
        int last_ind = 0;
        int plus=0;
        int minus=0;
        int result=0;
        int limit=1;

        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] >= '0' && s[i] <= '9' || s[i]=='-' || s[i]=='+')
            {
                last_ind = i;
                break;
            }
            else if (s[i] == ' ')
                continue;
            
            else
                return 0;
        }
        
        if(s[last_ind]=='-')
        {
            
            minus = 1;    
            last_ind++;
        }
        else if(s[last_ind]=='+')
        {
                last_ind++;
                
        }
        
        for(int i=last_ind;i<s.length();++i)
        {
            
            if(s[i]>='0' && s[i]<='9')
            {
                if(1ll*result*10+(s[i]-'0')>INT32_MAX)
                    {
                        if(minus)
                            return INT32_MIN;
                        else
                            return INT32_MAX;
                    }
                else
                {
                    result=result*10+(s[i]-'0');
                }
                
            }
            else
            {
                if(minus)
                {
                    return -1*result;
                }
                else
                    return result;
            }
            
        }
        if(minus)
        {
            return -1*result;
        }
        
            return result;
        
    }
};