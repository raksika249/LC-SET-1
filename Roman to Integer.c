int romanToNumeral(char a)
{
    switch(a)
    {
        case 'I':
        return 1;
        case 'V':
        return 5;
        case 'X':
        return 10;
        case 'L':
        return 50;
        case 'C':
        return 100;
        case 'D':
        return 500;
        case 'M':
        return 1000;
    }
    return 0;
}
int romanToInt(char* s) {
    int val1,val2;
    int res=0,len;
    len=strlen(s);
    char a[len];
    int i,f=0;
    for(i=0;i<len;i++)
    {
        a[i]=(*(s+i));
    }
    for(i=len-1;i>0;i--)
    {
        if(((a[i]=='V')||(a[i]=='X'))&&(a[i-1]=='I'))
        {
        val1=romanToNumeral(a[i]);
        val2=val1-1;
        i--;
        if(i==0)
        f=1;
        }
        else if(((a[i]=='C')||(a[i]=='L'))&&(a[i-1]=='X'))
        {
        val1=romanToNumeral(a[i]);
        val2=val1-10;
        i--;
        if(i==0)
        f=1;
        }
        else if(((a[i]=='D')||(a[i]=='M'))&&(a[i-1]=='C'))
        {
        val1=romanToNumeral(a[i]);
        val2=val1-100;
        i--;
        if(i==0)
        f=1;
        }
        else
        {
        val2=romanToNumeral(a[i]);
        }
        res=res+val2;
    }
if(f==0)
{
    val2=romanToNumeral(a[0]);
    res=res+val2;
}
    return res;   
}
