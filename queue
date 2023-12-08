#include<stdio.h>
#define n 10
int a[n];
int front=-1,rear=-1; 
void insert(int key)
{
	if(rear==(n-1))
{
	printf("queue is full");
	return;
}
else if(front==-1)
	{
		front++;
		rear++;
		a[front]=key;		
		}
else
	a[++rear]=key;
	
}

void delete()
{
if(front==-1)
	{
	printf("queue is empty\n");
	return;
	}
else if(front==rear)
	{
	printf("item deleted is %d \n",a[front]);
	front=rear=-1;
	}
else
	printf("item deleted is %d \n",a[front++]);
}
void display()
{
int i;
if(front==-1)
{
	printf("queue is empty");
	return;
}
else
{
	for(i=front;i<=rear;i++)
	printf("%d ",a[i]);
}
}
void main()
{
int data,choice,c;
do{
	printf("1.INSERT\n2.DELETE\n3.DISPLAY\nenter your choice\n");
	scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter the item to insert\n");
		scanf("%d",&data);
		insert(data);
		display();
		break;
case 2:delete();
		display();
		break;
case 3:display();
		break;
default:printf("Invlaid choice");
		break;
}
	printf("if you want to continue press 1 \n");
	scanf("%d",&c);
}
while(c==1);
}
