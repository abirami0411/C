#include<stdio.h>
int main()
{
int I,N,a,b,s,rem,i,n,c;
int k=0;
printf("enter the no. of set of inputs ");
scanf("%d",&I);
for(i=0;i<I;i++)
{
    printf("Enter the value ");
    scanf("%d %d",&a,&b);
    s=a+b;
    while(s>0)
    {
        rem=s%10;
        c=rem;
        s=s/10;
    switch(c)
    {
     case 0:
     n=6;
     break;
     case 1:
     n=2;
     break;
     case 2:
     n=5;
     break;
     case 3:
     n=5;
     break;
     case 4:
     n=4;
     break;
     case 5:
     n=5;
     break;
     case 6:
     n=6;
     break;
     case 7:
     n=3;
     break;
     case 8:
     n=7;
     break;
     case 9:
     n=6;
     break;
     default:
     printf("enter crt no");
    }
     k=n+k;
    }
    printf("the no of matches needed is %d",k);
    k=0;
}
}
