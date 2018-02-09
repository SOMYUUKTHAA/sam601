#include<stdio.h>
void main()
{
    int a=0,b=1,i,sum=0,n;
    printf("\nenter limit\n");
    scanf("%d",&n);
    printf("\nfibonocci series:\t%d\t%d",a,b);
    for(i=0;i<n;i++)
    {
     sum=a+b;
     a=b;
     b=sum;
     printf("\t%d",sum);
     }
}
