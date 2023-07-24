#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,n;
    printf("Enter t and n values");
    scanf("%d %d",&t,&n);
    printf("Enter array elements\n");
    int a[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if((a[i]+a[j]+a[k])<=t)
                {
                    count++;
                }
            }
        }
    }
    printf("%d",count);
}
