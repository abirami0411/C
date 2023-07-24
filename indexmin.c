#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,temp;
printf("enter the size\n");
scanf("%d",&n);
printf("Enter the array elements\n");
int a[n];
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
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
for(int i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
int index;
printf("\nEnter the index\n");
scanf("%d",&index);
printf("%d",a[index-1]);
}
