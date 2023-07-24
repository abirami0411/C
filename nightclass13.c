#include<stdio.h>
#include<stdlib.h>
void insert();
void display();
struct node
{
    char str;
    struct node *next;
}*newnode,*temp,*head;
int main()
{
    insert();
}
void insert()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
            printf("enter str");
            newnode=(struct node*)(malloc(sizeof(struct node)));
            scanf("%s",&newnode->str);
            newnode->next=0;
            if(head==0)
            {
                head=newnode;
                temp=newnode;
            }
            else
            {
                temp->next=newnode;
                temp=temp->next;
            }
        }
}



