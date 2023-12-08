#include<stdio.h>
void main()
{
int a[10];
int n,i,key,f=0;
printf("how many elements you want to enter\n");
scanf("%d",&n);
printf("enter the elements ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("which element you want to search\n");
scanf("%d",&key);
//search
	for(i=0;i<n-1;i++)
	{
	if(a[i]==key)
{
printf("%d found at position %d\n",key,i);
f++;
break;
}
	}
if(f==0)
	printf("%d is not present in the array\n",key);
}
