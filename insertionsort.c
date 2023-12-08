#include<stdio.h>
void main()
{
int a[10],n,i,j,temp;
printf("how many elements you want enter\n");
scanf("%d",&n);
printf("enter the elemnts\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

	for(i=1;i<n;i++)
{
temp=a[i];
	for(j=i-1;j>=0;j--)
{
if(temp<a[j])
a[j+1]=a[j];
else
break;
}
a[j+1]=temp;
}

printf("the sorted array\n");
for(i=0;i<n;i++)
printf("%d	",a[i]);
}

