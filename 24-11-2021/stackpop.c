#include<stdio.h>
#include<stdlib.h>
void spush(int);
void pop();
void display();
struct node
{

int data;
struct node *next;
}*top=NULL ;
void main()
{
    int choice,c;
    do{
            int item;

printf("\n 1.push \n 2.pop \n 3.display\n");
    printf(" \nenter your choice \t");
    scanf("%d",&choice);

switch(choice)
{

case 1:printf("\n enter the item that you want to insert\t");
    scanf("%d",&item);
    spush(item);
     break;
case 2:pop();
      break;
case 3:display();
       break;
}
printf("\n DO you want you..!!!!  \t");
scanf("%d",&c);
    }

    while (c==1);
}

void spush(int item)
{
    struct node *newnode=(struct node *)malloc(sizeof (struct node));
    newnode->data=item;
    if(top==NULL)
    {

        newnode->next=NULL;
        top=newnode;
    }
    else
    {
        newnode->next=top;
        top=newnode;
        printf("\n Node inserted\t ");

    }


}

void pop()
{
    struct node *temp;
        temp=top;
    if(top==NULL)
    {
        printf("list is empty");

    }
    else
    {

        top=temp->next;
        free(temp);
        printf("node deleted");
    }

}
void display()
{

    struct node *temp=top;
    printf("\n elements are \n");
    while(temp->next!=NULL)
    {
        printf("%d -->",temp->data);
        temp=temp->next;

    }
    printf("%d -->NULL",temp->data);
}


