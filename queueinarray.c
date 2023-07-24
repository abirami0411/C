#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n;
   int front=0;
   int rear=-1;
   printf("size");
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
       rear++;
   }
   front++;
   for(int i=front;i<=rear;i++)
   {
       printf("%d",a[i]);
   }

}
