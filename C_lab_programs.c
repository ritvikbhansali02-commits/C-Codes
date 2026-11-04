#include <stdio.h>
int main()
{
int marks;
printf("Enter your marks");
scanf("%d",&marks);


if (marks>=60)
{
printf("First Division!!");
}
else if (marks>=50 && marks<60)
{
    printf("Second Division!!");
}
else if (marks>=40 && marks<50)
{
    printf("Third Division!!");
}
else if (marks<40)
{
    printf("Fail!!");
}
return 0;
}
