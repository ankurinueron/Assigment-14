#include<stdio.h>           //average of 10 nos using array
int main()
{
    int sum=0,i,a[10];
    float avg;
    printf("Enter ten numbers : ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
        sum=sum+a[i];
        avg=sum/10.0;
    printf("Average is : %f",avg);
    return 0;
}
