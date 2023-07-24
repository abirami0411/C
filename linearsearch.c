#include<stdio.h>
void linear(int arr[],int n,int key)
{
int i,count=0;
for(i=0;i<n;i++)
{
if(key==arr[i])
{
count++;
}
}
if(count=1)
{
printf("linear value found");
}
else
{
printf("not yet");
}
}
int main()
{
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int element;
scanf("%d",&element);
linear(arr,n,element);
}
