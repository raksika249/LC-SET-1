char* addBinary(char* a, char* b) {
    int dec1=0,dec2=0,rem,bin=1,dec3;
    int len1=0,len2=0;
    len1=strlen(a);
    len2=strlen(b);
    for(int i=len1-1;i>=0;i--) {
        if((*(a + i))=='1') {
            dec1=dec1+bin;
        }
        bin*=2;
    }
    bin=1;
    for(int i=len2-1;i>=0;i--) {
        if((*(b+i))=='1') {
            dec2=dec2+bin;
        }
        bin*=2;
    }
    dec3=dec1+dec2;
    char* c[15];
    int len=0;
    while(dec3!=0) {
        rem=dec3%2;
        (*(c+len))=(char)rem + 48;
        len++;
        dec3=dec3/2;
    }
    *(c+len)='\0';
    return c;
}
