#include<stdio.h>           //finding greatest number among 10 nos
int main()
{
    int sum=0,i,a[10];
    printf("Enter ten numbers : ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=9;i++)
        if(a[0]<a[i])
            a[0]=a[i];
    printf("Greatest is : %d",a[0]);
    return 0;
}
