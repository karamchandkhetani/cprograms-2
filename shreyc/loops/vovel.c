#include<stdio.h>
int main()
{
 char ch;
 printf("enter character value");
 scanf("%c",&
ch);
  switch(ch)
{
 case 'a':
 case 'A':
 case 'e':
 case 'E':
 case 'i':
 case 'I':
 case 'o':
 case 'O':
 case 'u':
 case 'U':
 printf("%c is vovel",ch);
 break;
 default:
 printf("%c is consonent",ch);
}
return 0;
}
