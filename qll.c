#include<stdio.h>
#include<stdlib.h>
	typedef struct node
	{
		int data;
		struct node *next;
	}Node;
Node *front=NULL; 
Node *rear=NULL;
Node *createnode(int data)
{
Node *n;
n=(Node*)malloc(sizeof(Node));
n->data=data;
n->next=NULL;
return n;
}

void insert(Node *p)
{
	if(front==NULL)
{
	front=rear=p;
	return;
}		
	else
{
	rear->next=p;
	rear=p;
}
}
void delete()
{
if(front==NULL)
	{
	printf("empty queue\n");
	return;
		}
else if(front==rear)
	{
	printf("element deleted is %d \n",front->data);
	front=rear=NULL;
	return;
		}
else
	{	
printf("element deleted is %d \n",front->data);
	front=front->next;
	return;
	}
}
void display()
{
Node*temp;
temp=front;
if(temp==NULL)
printf("empty queue\n");
else
{
printf("front->");
while(temp!=NULL)
{
printf("%d->",temp->data);
temp=temp->next;
}
printf("rear\n");
}
}
void main()
{
int data,choice,c;
Node *n;
do{
	printf("1.INSERT\n2.DELETE\n3.DISPLAY\nenter your choice\n");
	scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter the item to be inserted \n");
		scanf("%d",&data);
		n=createnode(data);
		insert(n);
		display();
		break;
case 2:delete(n);
		display();
		break;
case 3:display();
		break;
default:printf("Invlaid choice\n");
		break;
}
	printf("if you want to continue press 1 \n");
	scanf("%d",&c);
}
while(c==1);
}


