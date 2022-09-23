#include<stdio.h>           //sum of odd & even nos using array taking 10 inputs
int main()
{
    int se=0,so=0,i,a[10];
    printf("Enter ten numbers : ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
        if(a[i]%2==0)
            se=se+a[i];
        else
            so=so+a[i];
    printf("Sum of even numbers are : %d",se);
    printf("\nSum of odd numnbers are : %d",so);
    return 0;
}
