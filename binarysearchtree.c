#include<stdio.h>
#include<stdlib.h>
void create();
void inorder(struct node *temp);
void preorder(struct node *temp);
void postorder(struct node *temp);
struct node
{
    int data;
    struct node *left;
    struct node *right;
}*root,*temp,*temp1;
int main()
{
    int n;
do
    {
       create(n);
       printf("Enter data");
       scanf("%d",&n);
    }
    while(n>0);
    inorder(temp);
    preorder(temp);
    postorder(temp);
}
void create(int n)
{
    int flag;
    struct node *newnode;
    newnode=(struct node*)(malloc(sizeof(struct node)));
    newnode->data=n;
    newnode->left=0;
    newnode->right=0;
    if(root==0)
        {
            root=newnode;
        }
        else
        {
            struct node *temp=root,*temp1=root;
            while(1)
            {
            if(temp->left==0)
        {
            temp->left=newnode;
            temp1=newnode;
        }
         else if(temp->right==0)
        {
            temp->right=newnode;
        }
        else if(flag==0)
        {
            temp=temp1->left;
            flag=1;
        }
        else
        {
            temp=temp1->right;
            flag=0;
            temp1=temp1->left;
        }
        }
        }
}
void inorder(struct node *temp)
{
    if(temp!=0)

    {
        display(root->left);
        printf("%d",root->data);
        display(root->right);
    }
}
void preorder(struct node *temp)
{
    if(temp!=0)
    {
        printf("%d",temp->data);
        display(temp->left);
        display(temp->right);
    }
}
void postorder(struct node *temp)
{
    if(temp!=0)
    {
        display(temp->left);
        display(temp->right);
        printf("%d",temp->data);
    }
}
