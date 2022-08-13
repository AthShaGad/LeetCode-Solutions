class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool carry=false;
        if(digits.size()==1)
        {
            if(digits[0]+1<10)
            {
                digits[0]++;
                return digits;
            }
            else
            {
                vector<int>temp_digits;
                temp_digits.push_back(1);
                temp_digits.push_back(0);
                return temp_digits;
            }
        }
        for(int i=digits.size()-1;i>=0;i--)
        {
            if(i==digits.size()-1)
            {
                if(digits[i]+1<10)
                    digits[i]++;
                else
                {
                    carry=true;
                    digits[i]=0;
                }
            }
            else if(i==0)
            {
                if(carry)
                {
                    if(digits[i]+1<10)
                        digits[i]++;
                    else
                    {
                        digits[i]=0;
                        vector<int> temp_digits;
                        temp_digits.push_back(1);
                        for(int j=0;j<digits.size();j++)
                            temp_digits.push_back(digits[i]);
                        digits=temp_digits;
                    }
                }
            }
            else
            {
                if(carry)
                {
                    if(digits[i]+1<10)
                    {
                        digits[i]++;
                        carry=false;
                    }
                    else
                    {
                        digits[i]=0;
                        carry=true;
                    }
                }
            }
        }
        return digits;
    }
};