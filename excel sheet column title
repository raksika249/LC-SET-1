char* convertToTitle(int columnNumber) 
{
  int length =0;
  int temp=columnNumber;
  while(temp>0)
  {
    length++;
    temp=(temp-1)/26;
  }
  char *columnTitle=(char*)malloc((length+1)* sizeof(char));
  columnTitle[length]='\0';
  while(columnNumber>0)
  {
    columnNumber--;
    columnTitle[--length]=(columnNumber % 26)+ 'A';
    columnNumber/=26;
  }
  return columnTitle;
}
