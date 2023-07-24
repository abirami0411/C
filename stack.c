#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
    int data;
    struct node *next;
}*temp,*top,*newnode,*temp1;
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
    temp=top;
    temp1=top->next;
    top=top->next->next;
    free(temp);
    free(temp1);
}
void display()
{
    temp=top;
    while(temp->next!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);

}
