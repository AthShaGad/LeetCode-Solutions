class Solution {
public:
    string intToRoman(int num) {
        string roman;
        while(num>0)
        {
            if(num>=1000)
            {
                roman+="M";
                num-=1000;
            }
            else if(num>=900&&num<1000)
            {
                roman+="CM";
                num-=900;
            }
            else if(num>=500&&num<900)
            {
                roman+="D";
                num-=500;
            }
            else if(num>=400&&num<500)
            {
                roman+="CD";
                num-=400;
            }
            else if(num>=100&&num<400)
            {
                roman+="C";
                num-=100;
            }
            else if(num>=90&&num<100)
            {
                roman+="XC";
                num-=90;
            }
            else if(num>=50&&num<90)
            {
                roman+="L";
                num-=50;
            }
            else if(num>=40&&num<50)
            {
                roman+="XL";
                num-=40;
            }
            else if(num>=10&&num<40)
            {
                roman+="X";
                num-=10;
            }
            else if(num>=9&&num<10)
            {
                roman+="IX";
                num-=9;
            }
            else if(num>=5&&num<9)
            {
                roman+="V";
                num-=5;
            }
            else if(num>=4&&num<5)
            {
                roman+="IV";
                num-=4;
            }
            else if(num>=1&&num<4)
            {
                roman+="I";
                num-=1;
            }
        }
        return roman;
    }
};