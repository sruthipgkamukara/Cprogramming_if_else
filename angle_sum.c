/*
 * Given three angles of a triangle, Write a c program to 
 * check whether it is a valid triangle or not 
 */ 
   
#include<stdio.h>
int main()
{

int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if((a+b+c)!=180)
{
printf("Invalid - angle sum property violated\n");}

else
printf("Valid triangle\n");














return 0;
}
