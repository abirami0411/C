#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m,temp,temp2,flag=0;
    printf("enter size1\n");
    scanf("%d",&n);
    printf("enter size2\n");
    scanf("%d",&m);
    int a[n];
    printf("Enter array1\n");
    for(int i=0;i<n;i++)
    {
     scanf("%d ",&a[i]);
    }
    int b[m];
    printf("Enter array2\n");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
    if(a[i]>a[j])
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}
}
for(int i=0;i<m;i++)
{
for(int j=i+1;j<m;j++)
{
    if(b[i]>b[j])
    {
        temp2=b[i];
        b[i]=b[j];
        b[j]=temp2;
    }
}
}
for(int i=0;i<n;i++)
{
    if(a[i]==b[i])
    {
        flag=0;
    }
    else
    {
        flag=1;
    }
}
if(flag==0)
{
    printf("1");
}
else
{
    printf("0");
}
}
