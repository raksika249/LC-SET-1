bool isHappy(int n) {
    long int sum=0,rem;
    while((n!=1)&&(n!=4))
    {
        sum=0;
        while(n!=0)
        {
        rem=n%10;
        sum=sum+(rem*rem);
        n=n/10;
        }
        n=sum;
    }
    if(n==1)
    {
        return 1;
    }
    else
    return 0;
}
