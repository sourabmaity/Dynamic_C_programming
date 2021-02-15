#include<stdio.h>
#include<stdlib.h>
int *arr,n;
void quick(int first,int last)
{
	if(first<last)
	{
		int pivot=first,i=first,j=last,temp,k;
		while(i<j)
		{
			for(;*(arr+i)<*(arr+pivot)&&i<=last;i++);
			for(;*(arr+j)>*(arr+pivot)&&j>=first;j--);
			if(i<j)
			{
				temp=*(arr+i);
				arr[i]=*(arr+j);
				arr[j]=temp;
			}
		}
		temp=*(arr+j);
		arr[j]=*(arr+pivot);
		arr[pivot]=temp;
		quick(first,j-1);
		quick(j+1,last);
	}
}
int main()
{
	int i;
	printf("How many numbers: ");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	printf("Enter your values: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	quick(0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",*(arr+i));
	}
	return(0);
}
