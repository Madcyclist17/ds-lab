#include<stdio.h>
void main()
{
int a[10];
int n,i,key,low,mid,high,f=0;
	printf("how many you want to enter\n");
scanf("%d",&n);
	printf("enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
	printf("which element you want to search\n");
scanf("%d",&key);
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(a[mid]==key)
{
printf("%d found at position %d\n",key,mid);
f++;
break;
}
else if(a[mid]<key)
low=mid+1;
else
high=mid-1;
}
if(f==0)
	printf("%d is not present in the array\n",key);
}
