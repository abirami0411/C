#include<stdio.h>
#include<stdlib.h>

struct node
{
    char data;
    struct node*next;
}*head,*tail,*new,*temp;

int main()
{
    create();
    display();
}

void create()
{
    int ch=1;
    while(ch==1)
    {
        new=(struct node*)malloc(sizeof(struct node));
        scanf("%c",&new->data);
        new->next=NULL;
        if(new->data==' ')
        {
            ch=0;
            break;
        }
        if(head==NULL)
        {
            head=new;
            tail=new;
        }
        else
        {
            tail->next=new;
            tail=new;
        }
    }
}

void display()
{
    temp=head;
    int s=0;
    char cd;
    while(temp!=NULL)
    {
        if(temp->data>='0' && temp->data<='9')
        {
            s=((int)temp->data)-48-1;
            while(s-->0)
            {
                printf("%c",cd);
            }
            temp=temp->next;
        }
        else
        {
            printf("%c",temp->data);
            cd=temp->data;
            temp=temp->next;
        }
    }
}
