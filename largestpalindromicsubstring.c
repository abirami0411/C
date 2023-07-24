/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a[20];
    scanf("%s",a);
    int n=strlen(a);
    char b[20];
    int j=0;
    for(int i=0;i<n;i++)
    {
        b[j++]='#';
        b[j++]=a[i];
        j++;
        i++;
    }
    for(int i=0;i<strlen(b);i++)
    {
        printf("%c",b[i]);
    }
}*/
#include <stdio.h>
#include <string.h>
void main()
{
    char s[10];
    scanf("%s", s);
    int len = strlen(s);
    char str[len + (len + 1) + 1];

    int index = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        str[index++] = '#';
        str[index++] = s[i];
    }
    str[index++] = '#';
    int length[index];
    int maxindex = 0;
    for(int i = 0;i < strlen(str);i++)
    {
        length[i] = 0;
        for(int left = i-1,right = i+1; left >= 0 && right < strlen(str);left--,right++)
        {
            if(str[left] != str[right])
                break;
            length[i]++;
        }
        if(length[maxindex] < length[i])
            maxindex = i;
    }
    for(int i = maxindex - length[maxindex];i <= maxindex + length[maxindex];i++)
    {
        if(str[i] != '#')
            printf("%c",str[i]);
    }
}
