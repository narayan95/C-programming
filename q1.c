/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<math.h>
int main()
{
    int i=0,num,j,k,power,power2;
printf("enter numbesr");
scanf("%d",&num);//taking the input from user
power=pow(8,i);
while(num%power!=num)//loop will run till power becomes greater than num
{
    i++;
    power=pow(8,i);
}
power2=pow(8,i-1);
k= power-num;
j=num-power2;
if(k>j)
printf("%d", power2);
else if(k<j)
printf("%d",power);
else
printf("number is at equal distance from %d and %d",power,power2);


    return 0;
}
