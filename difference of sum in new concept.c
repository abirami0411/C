#include<stdio.h>
int main()
{
int n,m,sum1=0,sum2=0,i,sum3=0;
printf("Enter the values of n and m ");
scanf("%d%d",&n,&m);
for(i=n;i<=m;i=i+n)
{
sum1=sum1+i;
}
for(i=1;i<=m;i++)
{
    if(i%n!=0)
    {
        sum2=sum2+i;
    }
}
sum3=sum2-sum1;
printf("%d-%d=%d",sum2,sum1,sum3);
}
