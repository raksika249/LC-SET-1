int titleToNumber(char* columnTitle) {
{
int op,s=0;
while(*columnTitle!='\0')
{
    op=(*columnTitle-'A'+1);
    s=s*26+op;
    columnTitle++;
}
return s;
}
}
