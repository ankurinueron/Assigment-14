#include<stdio.h>           //sum of 10 nos using array
int main()
{
    int sum=0,i,a[10];
    printf("Enter ten numbers : ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
        sum=sum+a[i];
    printf("Sum is : %d",sum);
    return 0;
}
