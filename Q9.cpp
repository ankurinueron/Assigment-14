#include<stdio.h>               //reverse of an array
int main()
{
    int a[10],i,j;
    printf("Enter ten numbers : ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=9;i>=0;i--)
        printf("%d ",a[i]);
    return 0;
}
