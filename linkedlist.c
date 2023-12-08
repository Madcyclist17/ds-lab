#include<stdio.h>
#include<stdlib.h>
	typedef struct node
	{
		int data;
		struct node *next;
	}Node;
Node *head=NULL;
Node *createnode(int data)
{
Node *n;
n=(Node*)malloc(sizeof(Node));
n->data=data;
n->next=NULL;
return n;
}
	void insert_begin(Node *p)
{
if(head==NULL)
head=p;
else
	{
	p->next=head;
	head=p;
	}
}
	void insert_end(Node *p)
{
	Node *temp;
	temp=head;
	if(temp==NULL)
		head=p;
	else
{
	while(temp->next!=NULL)
	temp=temp->next;
temp->next=p;
}
}

void insert_after_node(Node *p)
{
Node*temp;
int key;
printf("enter the key\n");
scanf("%d",&key);
if(head==NULL)
printf("List empty,insertion not possible\n");
else 
	{
	temp=head;
	while(temp!=NULL)
		{
		if(temp->data==key)
		{
			if(temp->next==NULL)
			{
				temp->next=p;
				return;
			}
			else
     		{
				p->next=temp->next;
				temp->next=p;
				return;		
			}
	    }
temp=temp->next;
		}
printf("Insertion is not possible since the key is not present in the list\n");
	} 
}

void insert_before_node(Node *p)
{
Node*temp;
int key;
printf("enter the key\n");
scanf("%d",&key);
if(head==NULL)
printf("List empty,insertion not possible\n");
else
{
temp=head;
while(temp->next!=NULL)
	{
		if(temp->data==key)
				{
					p->next=head;
					head=p;
                   return;
				}

		else
		{
		if(temp->next->data==key)
			{
				p->next=temp->next;
				temp->next=p;
				return;
			}
		else		
			temp=temp->next;
		}
	 }
}
			if(temp->data==key)
				{
					p->next=head;
					head=p;
				}
else
{
printf("insertion is not possible\n");
						return;
}
}
void delete_at_begin()
{
if(head==NULL)
	{
	printf("List empty\n");
	return;
		}
else if(head->next==NULL)
	{
	head=NULL;
	return;
		}
else
	{
	head=head->next;
	return;
	}
}

void delete_at_end()
{
Node*temp;
if(head==NULL)
	{
	printf("List empty\n");
	return;
		}
else if(head->next==NULL)
	{
	head=NULL;
	return;
		}
else
	{
	temp=head;
	while(temp->next->next!=NULL)
		temp=temp->next;
		temp->next=NULL;
	}
}
void Delete_after_a_node(int key)
{
Node*temp;
printf("enter the key\n");
scanf("%d",&key);
 if(head==NULL)
{
 	printf("list empty\n");
	return;
}
else if(head->next==NULL)
{
	printf("Delete after not possible\n");
	return;
}
else
{
 temp=head;
 while(temp!=NULL)
{
if(temp->data==key)
{
if(temp->next!=NULL)
{
temp->next=temp->next->next;
return;
}
else
{
printf("No node after key\n");
return;
}
}
else
    temp=temp->next;
}
}
printf("key is not present in the list\n");
}
void Delete_before_a_node(int key)
{
Node*temp;
printf("enter the key\n");
scanf("%d",&key);
if(head==NULL)
{
printf("list empty\n");
return;
}
else if(head->next==NULL)
{
printf("delete before not possible\n");
return;
}
else
{
temp=head;
if(temp->next->data==key)
{
head=head->next;
return;
}
else
{
while(temp->next->next!=NULL)
{
if(temp->next->next->data==key)
{
temp->next=temp->next->next;
return;
}
else
temp=temp->next;
}
}
printf("key not present in the list\n");
}
}

void Display()
{
Node*temp;
temp=head;
if(temp==NULL)
printf("List is empty\n");
else
{
printf("Head->");
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
int choice,data,c;
Node *n;
do{
printf("1.insert at begin\n 2.insert at the end\n     3.insert after a node\n    4.insert before a node\n 5.delete at begin\n 6.delete at end\n 7.delete after a node\n 8.delete before a node\n 9.display\nenter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter the node data \n");
		scanf("%d",&data);
		n=createnode(data);
		insert_begin(n);
		Display();
		break;
case 2:printf("enter the node data \n");
		scanf("%d",&data);
		n=createnode(data);
		insert_end(n);
		Display();
		break;
case 3:printf("enter the node data \n");
		scanf("%d",&data);
		n=createnode(data);
		insert_after_node(n);
		Display();
		break;
case 4:printf("enter the node data \n");
		scanf("%d",&data);
		n=createnode(data);
		insert_before_node(n);
		Display();
		break;

case 5:	delete_at_begin(n);
		Display();
		break;

case 6:delete_at_end(n);
		Display();
		break;
case 7:Delete_after_a_node(n);
       Display();
       break;
case 8:Delete_before_a_node(n);
       Display();
       break;
case 9:Display();
default:printf("Invalid choice\n");
		break;
}
	printf("if you want to continue press 1 \n");
	scanf("%d",&c);
}
while(c==1);
}










