#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void count();
struct node
{
    int data;
    struct node*next;
}*temp,*head,*newnode;
int main()
{
int option;
while(1)
{
printf("1.create\n");
printf("2.display\n");
printf("3.count the elements\n");
printf("4.exit\n");
printf("enter the choice\n");
scanf("%d",&option);
switch(option)
{
case 1:
 create();
 break;
case 2:
display();
break;
case 3:
count();
break;
case 4:
exit();
break;
}
void create()
{
int n,i,j;
    printf("enter the size; ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode=(struct node*)malloc (sizeof(struct node));
        printf("enter the element");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        }

}
void display()
{
temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;

    }
}
void count
{
 temp=head;
 while(temp!=NULL)
    {
        int count=0;
        temp=temp->next;
        count++;
    }
    printf("count is %d",count);

}






