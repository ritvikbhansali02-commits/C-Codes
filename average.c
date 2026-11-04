#include <stdio.h>

int main(){
    int a,b;
    float average;
    printf("Enter the two numbers:");
    scanf("%d%d",&a,&b);
    average = (a+b)/2.0;
    printf("Average of two numbers= %.2f\n",average);
    return 0;

}