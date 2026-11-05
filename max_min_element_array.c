#include<stdio.h>
int main()
{
    int a[20],min,max;
    int i,n;
printf("Enter the Number of Elements\t:");
scanf("%d",&n);
printf("Enter the Elements\n");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
 if(i==0)
 min=max=a[i];
 if(a[i]<min)
 min=a[i];
 if(a[i]>max)
max=a[i];
}
printf("Biggest Element is %d and Smallest Element is %d",max,min);
 }