#include<stdio.h>
#include<stdlib.h>
struct node
{int data;
struct node*next;
struct node*prev;

}*head=NULL;
void insertatbeg()
{
struct node*temp;
temp=head;
int item;
struct node*newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the element:");
scanf("%d",&item);
newnode->data=item;
if(head==NULL)
{
    head=newnode;
    newnode->next=NULL;
    newnode->prev=NULL;
}
else
{
    newnode->next=head;
    head->prev=newnode;
    newnode->prev=NULL;
    head=newnode;
}
}
void insertatend()
{struct node*temp;
temp=head;
int item,pos;
struct node*newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the element:");
scanf("%d",&item);
newnode->data=item;
if(head==NULL)
{
    head=newnode;
    newnode->next=NULL;
    newnode->prev=NULL;
}
 else
 {
  while(temp->next!=NULL)
  {
      temp=temp->next;
  }
  temp->next=newnode;
  newnode->prev=temp;
  newnode->next=NULL;
 }
}
void insertpos()
{struct node*temp;
temp=head;
int item,pos;
struct node*newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the element:");
scanf("%d",&item);
printf("enter the location:");
scanf("%d",&pos);
newnode->data=item;
if(head==NULL)
{
    head=newnode;
    newnode->next=NULL;
    newnode->prev=NULL;
}
else
    {
        while(temp->next!=NULL&&temp->data!=pos)
        {
            temp=temp->next;

            if(temp->next==NULL)
            {
                printf("\nelement not found:");
            }
        }
        newnode->next=temp->next;
        temp->next=newnode;
        newnode->prev=temp;
        newnode->next->prev=newnode;
    }
}
void delatbeg()
{struct node*temp;
temp=head;
    if(head==NULL)
    {
        printf("deletion not possible:");
    }
head=head->next;
head->prev=NULL;
free(temp);
}
void delatend()
{
   struct node*temp;
temp=head;
    if(head==NULL)
    {
        printf("deletion not possible:");
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->prev->next=NULL;
    temp->prev=NULL;
    free(temp);
}
void delatpos()
{struct node*temp;
temp=head;
int pos;
printf("enter the position:");
scanf("%d",&pos);
    if(head==NULL)
    {
        printf("deletion not possible:");
    }
    while(temp->next!=NULL&&temp->data!=pos)
    {
        temp=temp->next;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
}
void display()
{struct node*temp;
 temp=head;
 while(temp->next!=NULL)
 {
     printf("%d-->",temp->data);
     temp=temp->next;
 }
printf("%d",temp->data);
printf("-->NULL");
}
void main()
{
    int ch,n;
    do
    {
    printf("\n1.insert at beginning\n2.insert at end\n3.insert at specified position\n4.delete at benning\n5.delete at end");
    printf("\n6.deldte at specified position\n7.display");
    printf("\nenter your choice:");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:insertatbeg();
               break;
        case 2:insertatend();
               break;
        case 3:insertpos();
               break;
        case 4:delatbeg();
               break;
        case 5:delatend();
               break;
        case 6:delatpos();
               break;
        case 7:display();
               break;
    }
    printf("\nDo you want to insert more:");
    scanf("%d",&n);
    }
    while(n==1);
}
