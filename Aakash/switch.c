#include<stdio.h>
int main(){
char ch;
printf("enter your choice");
scanf("%c",&ch);
switch(ch)
{
case('a'):
case('e'):
case('i'):
case('o'):
case('u'):
case('A'):
case('E'):
case('I'):
case('O'):
case('U'):
printf("vowles");
break;

default:
printf("consonents");
}
return 0;
}
