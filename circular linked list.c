#include<stdio.h>
#include<stdlib.h>
int insertion();
int display();
int skip();
struct node
{
int data;
struct node *next;
struct node *previous;
}*temp,*newnode,*head;
int main()
{
    insertion();
    display();
    skip();
    display();
}
int insertion()
{
 int choice=1;
 while (choice==1)
 {
 newnode=malloc(sizeof(struct node));
 printf("Enter the data");
 scanf("%d",&newnode->data);
 newnode->next=0;
 if(head==0)
 {
 head=newnode;
 newnode->next=head;
 head->previous=newnode;
 }
 else
 {
  temp=head;
  while(temp->next!=head)
  {
      temp=temp->next;
  }
   temp->next=newnode;
    newnode->next=head;
    head->previous=newnode;

    }
    printf("Enter the choice");
    scanf("%d",&choice);
    }
}
int display()
{
temp=head;
while(temp->next!=head)
{
printf("%d",temp->data);
temp=temp->next;
}printf("%d",temp->data);
}
int skip()
{
    temp=head;
    while(temp->next!=head)
    {
        for(temp=head;temp!=head;temp)
        {
temp=temp->next;
}            temp->previous->next=temp->next;
            temp->next->previous=temp->previous;
            free(temp);
    }
}


