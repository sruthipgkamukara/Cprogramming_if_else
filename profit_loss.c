/* 
 * Given cost price and selling price, Write a 
 * C program to calculate Profit or loss 
 */ 

#include<stdio.h>
int main()
{
float sp,cp,profit,loss;
printf("Enter cost price :");
scanf("%f",&cp);
printf("Enter selling price :");
scanf("%f",&sp);
if(sp>cp)
printf("Profit : %.2f",sp-cp);
else if(cp>sp)
printf("Loss : %.2f",cp-sp);
else
printf("No profit. No loss");
printf("\n");
return 0;
}
