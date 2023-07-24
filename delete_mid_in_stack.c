#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
    int data;
    struct node *next;
}*temp,*top,*newnode,*temp1,*prev;
int main()
{
 push();
 display();
 pop();
 display();
}

void push()
{
    int choice=1;
    while(choice==1)
    {
    newnode=malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(top==0)
    {
        top=newnode;
    }
    else
    {
        newnode->next=top;
        top=newnode;
    }
    printf("choice");
    scanf("%d",&choice);
}
}
void pop()
{
    int count=0;
    temp=top;
    while(temp->next!=0)
    {
        count++;
        temp=temp->next;
    }
    count++;
    temp=top;
    int n=count/2;
    for(int i=0;i<n-1;i++)
    {
        temp=temp->next;
    }
    temp->next=temp->next->next;

}
void display()
{
    temp=top;
    printf("\n");
    while(temp->next!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);

}
