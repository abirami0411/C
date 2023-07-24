#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m,num;
    printf("Enter the first size1\n");
    scanf("%d",&n);
    printf("Enter the first size2\n");
    scanf("%d",&m);
    printf("Enter array1\n");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Enter array2\n");
    int b[n];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Enter the num\n");
    scanf("%d",&num);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]+b[j]==num)
            {
                printf("%d %d\n",a[i],b[j]);
            }
        }
    }
}
