#include<stdio.h>               //sorting of an array
int main()
{
    int a[10],i,m,n,temp;
    printf("Enter ten numbers : ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(m=0;m<9;m++)
    {
        for(n=m+1;n<10;n++)
        {
            if(a[m]>a[n])
            {
            temp=a[m];
            a[m]=a[n];
            a[n]=temp;
            }
        }
    }
    for(m=0;m<10;m++)
        printf("%d ",a[m]);
    return 0;
}
