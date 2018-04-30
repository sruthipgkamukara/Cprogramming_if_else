/*
*C program to check whether a character is alphabet or digit
*/
#include<ctype.h>
#include<stdio.h>
int main()
{
char ch;
scanf("%c",&ch);
//if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
if(isalpha(ch))
printf("%c is alphabet\n",ch);
else if(isdigit(ch))
printf("%c is a digit\n",ch);
else
printf("%c is not an alphabet nor a digit\n",ch);












return 0;
}
