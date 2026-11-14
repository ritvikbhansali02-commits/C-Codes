#include<stdio.h>
int main()
{
int age;
printf("Enter your age to check voting eligiblity");
scanf("%d",&age);
if (age>=0)
{
    if (age>=18)
    printf("You are Eligible to vote");
}
else
{
printf("You are not Eligible to vote");
}
return 0;
}
