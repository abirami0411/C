#include<stdio.h>
void main()
{
int i,p,n,count=0;
printf("enter the size");
scanf("%d",&n);
int a[n];
printf("enter the cost");
scanf("%d",&p);
printf("enter the elements");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
    if(i==p && i<p)
{
    count=i;
    count=count-p;
}
else{
        count=i;
    count=count-p;
}
for(i=1;i<=n;i++)
    if(count==0)
{
printf("false");

}
else{
    printf("true");

}
}
