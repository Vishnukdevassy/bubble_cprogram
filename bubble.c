#include<stdio.h>
void main()
{
	int a[20];
	int n,i,j,tmp;
	printf("\n enter the limit of an array");
	scanf("%d",&n);
	printf("\n enter array elements are:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	
	printf("\n Before swapping:");
	printf("\n array elements are:");
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
		
	}


	printf("\n After swapping:");

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}

	printf("\n array elements are:");
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
		
	}

}