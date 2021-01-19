#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr,n,i,j,temp;
	printf("How many numbers: ");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	printf("Enter your valus: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		temp=i;
		for(j=i+1;j<n;j++)
		{
			if(*(arr+temp)>*(arr+j))
			{
				temp=j;
			}
		}
		if(temp!=i)
		{
			j=*(arr+temp);
			arr[temp]=*(arr+i);
			arr[i]=j;
		}
	}
	printf("After sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(arr+i));
	}
}
