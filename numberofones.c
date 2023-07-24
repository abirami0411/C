#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    printf("Enter num value\n");
    scanf("%d",&num);
    int count=0;
    for(int i=1;i<=num;i++)
    {
        if(i>=10)
        {
            int n=i;
            while(n>0)
            {
            int rem=n%10;
            n=n/10;
            if(rem==1)
            {
                count++;
            }
            }
        }
        else
        {
            if(i==1)
            {
                count++;
            }
        }

    }
    printf("%d",count);
}
