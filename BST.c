#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int key;
struct node *left,*right;
}Node;
Node*root=NULL;
Node *createnode(int data)
{
Node *ptr;
ptr=(Node*)malloc(sizeof(Node));
ptr->key=data;
ptr->left=NULL;
ptr->right=NULL;
return ptr; 
}
Node*  insert(Node *Root,int key)
{
if(Root==NULL)
	{
		return createnode(key);
		}
else if(key>Root->key)
	{
		Root->right=insert(Root->right,key);
		}
else
	Root->left=insert(Root->left,key);
return Root;
}

void inorder(Node *Root)
{
if(Root!=NULL)
		{
		inorder(Root->left);
		printf(" %d ",Root->key);
		inorder(Root->right);
			}
}
void preorder(Node *Root)
{
if(Root!=NULL)
		{
		printf(" %d ",Root->key);
		preorder(Root->left);
		preorder(Root->right);
			}
}
void postorder(Node *Root)
{
if(Root!=NULL)
		{
		postorder(Root->left);
		postorder(Root->right);
		printf(" %d ",Root->key);
			}
}
void search(Node *Root,int key)
{
if(Root!=NULL)
	{
	if(Root->key==key)
	{printf("%d is present in the tree\n",key);
	return;
	}
	else if(Root->key>key)	
	search(Root->left,key);
	else
	search(Root->right,key);			
	}	
else
{
printf("%d is not present in the tree\n",key);
}
}
void main()
{
int choice,data,n,i,c;
Node *ptr;
do{
printf("1.insert \n 2.inorder\n 3.preorder\n 4.postorder\n 5.search \nenter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("how many nodes to entered\n");
		scanf("%d",&n);
		printf("enter the node data \n");
		for(i=0;i<n;i++)
		{
		scanf("%d",&data);
		root=insert(root,data);
		}		
		break;
case 2:inorder(root);
		break;
case 3:preorder(root);
		break;
case 4:postorder(root);
		break;
case 5:printf("enter the element to search \n");
		scanf("%d",&data);
		search(root,data);
		break;
default:printf("Invalid choice\n");
		break;
}
	printf("\n if you want to continue press 1 \n");
	scanf("%d",&c);
}
while(c==1);
}
