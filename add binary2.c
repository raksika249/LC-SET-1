char* addBinary(char* a, char* b) {
    int len1=0,len2=0,c=0;
    len1=strlen(a);
    len2=strlen(b);
    if(len1>=len2)
    {
        int sub=len1-len2;
        *b>>sub;
        char *res[len1+1];
        res[len1+1]='\0';
    }
    else
    {
        int sub=len2-len1;
        *a>>sub;
        char *res[len2+1];
        res[len1+1]='\0';
    }
    for(int i=len1-1;i>=0;i--)
    {
        if(((a[i]==1)&&(b[i]==0)&&(c==0))||((a[i]==0)&&(b[i]==1)&&(c==0))||((a[i]==0)&&(b[i]==0)&&(c==1)))
        {
            res[i]=1;
            c=0;
        }
        else if(((a[i]==1)&&(b[i]==1)&&(c==0))||((a[i]==0)&&(b[i]==1)&&(c==1))||((a[i]==1)&&(b[i]==0)&&(c==1)))
        {
            res[i]=0;
            c=1;
        }
        else if(((a[i]==1)&&(b[i]==1)&&(c==1)))
        {
            res[i]=1;
            c=1;
        }
        else
        {
            res[i]=0;
            c=0;
        }
    }
    res[len1+1]='\0';
    return *res;
}
