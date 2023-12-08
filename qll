#include<stdio.h>
#define n 5
int a[n];
int top=-1;
void push(int item)
{
	if(top==(n-1))
		{
			printf("stack is overflow\n");
			return;
			}
	else
	a[++top]=item;
}
void pop()
{
int t;
if(top==-1)
	{
	printf("stack is underflow\n");
	return;
	}
else
	{
	t=a[top--];
	printf("item popped is %d\n",t);
		}
}
void peak()
{
if(top==-1)
	{
	printf("stack is underflow\n");
	return;
	}
else 
	printf("the topmost item is %d\n",a[top]);
}
void display()
{
int i;
if(top==-1)
{
	printf("stack is empty");
}
else
{
	for(i=top;i>-1;i--)
	printf("%d ",a[i]);
}
}
void main()
{
int data,choice,c;
do{
	printf("1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\nenter your choice\n");
	scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter the item to push \n");
		scanf("%d",&data);
		push(data);
		break;
case 2:pop();
		break;
case 3:peak();
		break;
case 4:display();
		break;
default:printf("Invlaid choice");
		break;
}
	printf("if you want to continue press 1 \n");
	scanf("%d",&c);
}
while(c==1);
}
