#include<stdio.h>
void main()
{
int a[10],n,i,j,temp;
printf("how many elements you want enter\n");
scanf("%d",&n);
printf("enter the elemnts\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);


	for(i=0;i<n-1;i++)		
{
		for(j=0;j<n-1-i;j++)
		if(a[j]>a[j+1])
		{	temp=a[j+1];
			a[j+1]=a[j];
			a[j]=temp;	
}

}
printf("the sorted array");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
