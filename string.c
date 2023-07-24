#include <stdio.h>
int main()
{
    int n;
    char str[20];
    char goal[20];
    int temp;
    scanf("%d",&n);
    printf("Enter the first string");
    scanf("%s",str);
    printf("Enter the second string");
    scanf("%s",goal);
    for(int i=0;i<n;i++)
    {
    temp=str[i];
    str[i]=str[i+1];
    str[i+1]=temp;
    }
    printf("\n%s",str);
    for(int i=0;i<n;i++)
        if(str==goal)
    {
      printf("true");
    }
    else{
        printf("false");
    }

}
