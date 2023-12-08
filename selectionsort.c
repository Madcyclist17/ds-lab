#include<stdio.h>
void main()
{
int a[10],n,i,j,temp,smallest;
printf("how many elements you want enter\n");
scanf("%d",&n);
printf("enter the elemnts\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<n-1;i++)
{
smallest=i;
	for(j=i+1;j<n;j++)
	{
	if(a[smallest]>a[j])
	smallest=j;
	}
if(smallest!=i)
{
temp=a[smallest];
a[smallest]=a[i];
a[i]=temp;
}
	}
printf("sorted array is ");
for(i=0;i<n;i++)

printf("%d\t",a[i]);
}


