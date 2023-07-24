#include<stdio.h>
int rowckeck(int a[9][9]);
int columncheck(int a[9][9]);
int main()
{
int a[9][9]={{1,2,3,4,5,6,7,8,9},
             {2,3,4,5,6,7,8,9,1},
             {3,4,5,6,7,8,9,1,2},
             {4,5,6,7,8,9,1,2,3},
             {5,6,7,8,9,1,2,3,4},
             {6,7,8,9,1,2,3,4,5},
             {7,8,9,1,2,3,4,5,6},
             {8,9,1,2,3,4,5,6,7},
             {9,1,2,3,4,5,6,7,8}};
if(rowcheck(a)==1)
{
printf("satisfied");
}
else
{
printf("Not satisfied");
}
}
int rowcheck(int a[9][9])
{
 int b[9]={0,0,0,0,0,0,0,0,0};
 for (int i=0;i<9;i++)
 {
 for(int j=0;j<9;j++)
 {
 int C[a[i][j]++];
 }
 }
 for(int k=1;k<=9;k++)
 {
     int c[9];
 if(c[k]!=1)
 {
 return 1;
 }}
 for(int k=1;k<=9;k++)
 {
 int c[9];
 c[k]=0;
 return 0;
}}
