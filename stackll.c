#include<stdio.h>
#include<stdlib.h>
	typedef struct node
	{
		int data;
		struct node *next;
	}Node;
Node *top=NULL;
Node *createnode(int data)
{
Node *n;
n=(Node*)malloc(sizeof(Node));
n->data=data;
n->next=NULL;
return n;
}

void push(Node *p)
{
if(top==NULL)
top=p;
else
	{
	p->next=top;
	top=p;
	}
}

void pop()
{
if(top==NULL)
	{
	printf("stack is  empty\n");
	return;
		}
else if(top->next==NULL)
	{
	top=NULL;
	return;
		}
else
	{
	top=top->next;
	return;
	}
}

void peak()
{
printf("top element is ->%d\n",top->data);
}

void display()
{
Node*temp;
temp=top;
if(temp==NULL)
printf("stack is empty\n");
else
{
printf("top->");
while(temp!=NULL)
{
printf("%d->",temp->data);
temp=temp->next;
}
printf("NULL\n");
}
}
void main()
{
int data,choice,c;
Node *n;
do{
	printf("1.PUSH\n2.POP\n3.PEAK\n4.DISPLAY\nenter your choice\n");
	scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter the item to push \n");
		scanf("%d",&data);
		n=createnode(data);
		push(n);
		break;
case 2:pop(n);
		break;
case 3:peak();
		break;
case 4:display();
		break;
default:printf("Invlaid choice\n");
		break;
}
	printf("if you want to continue press 1 \n");
	scanf("%d",&c);
}
while(c==1);
}


