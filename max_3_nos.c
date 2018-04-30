/*
*C program to find maximum of three numbers
*/
#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
int max=(a>b)?((a>c)?a:c):((b>c)?b:c);
printf("Maximum of three nos is %d\n",max);



















return 0;
}
