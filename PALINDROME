bool isPalindrome(int x) {
    int rem;
    long long int rev=0,ori;
    ori=x;
    if(x<0)
    return 0;
    while(x>0)
    {
        rem=x%10;
        rev=(rev*10)+rem;
        x=x/10;
    }
    if(rev==ori)
    return 1;
    else
    return 0;
}
