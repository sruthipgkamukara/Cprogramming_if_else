/*
 * C program to print Number of Days in any Month 
 */ 
   
#include<stdio.h>
int main()
{

int num;
scanf("%d",&num);
switch(num)
{
case 2:
printf("28 or 29\n");
break;

case 4:
case 6:
case 9:
case 11:
printf("30 days\n");
break;

case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
printf("31 days\n");
break;

default:
printf("Invalid\n");



}




return 0;
}
