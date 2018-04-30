/*
 * Given three sides of a triangle, Write a c program to 
 * check whether it is a valid triangle or not 
 */ 
#include<stdio.h>
int main()
{
int s1,s2,s3;
scanf("%d %d %d",&s1,&s2,&s3);
if((s1+s2)>s3 && (s2+s3)>s1 && (s1+s3)>s2)
printf("Valid triangle\n");
else
printf("Invalid triangle\n");
return 0;
}
