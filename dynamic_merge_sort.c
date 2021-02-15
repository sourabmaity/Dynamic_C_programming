#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int *arr,*arr2,n;
void merge(int f1,int l1,int f2,int l2)
{
	int i=f1,k,ind2=0;
	for(;f1<=l1&&f2<=l2;)
	{
		if(*(arr+f1)>*(arr+f2))
		{
			arr2[ind2++]=*(arr+f2++);
		}
		else
		{
			arr2[ind2++]=*(arr+f1++);
		}
	}
	while(f1<=l1)
	{
		arr2[ind2++]=*(arr+f1++);
	}
	while(f2<=l2)
	{
		arr2[ind2++]=*(arr+f2++);
	}
	for(k=0;k<ind2;k++)
	{
		arr[i++]=*(arr2+k);
	}
	
}
void mergesort(int first,int last)
{
	if(first<last)
	{
		int mid=((last-first)/2)+first;
		mergesort(first,mid);
		mergesort(mid+1,last);
		merge(first,mid,mid+1,last);
	}
}
int main()
{
	int i;
	printf("How many numbers: ");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	arr2=(int*)malloc(n*sizeof(int));
	printf("Enter your values: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	mergesort(0,n-1);
	printf("\nAfter sorting: \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(arr+i));
	}
	return(0);
}
