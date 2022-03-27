struct stack
{
    char st[10000];
    int top;
}typedef stack;

bool isValid(char * s){

    stack a;
    a.top=-1;
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
        {
            a.top++;
            a.st[a.top]=s[i];
            
        }
        else if(s[i]==')')
        {
            if(a.top==-1||a.st[a.top]!='(')
                return false;
            else
                a.top--;
        }
        else if(s[i]=='}')
        {
            if(a.top==-1||a.st[a.top]!='{')
                return false;
            else
                a.top--;
        }
        else if(s[i]==']')
        {
            if(a.top==-1||a.st[a.top]!='[')
                return false;
            else
                a.top--;
        }
        i++;
    }
    if(a.top==-1)
        return true;
    return false;
}