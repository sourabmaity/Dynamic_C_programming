#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr,n,i,j,temp;
	printf("How many elements? ");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	printf("Enter your values ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&temp);
		for(j=i-1;j>=0;j--)
		{
			if(*(arr+j)>temp)
			{
				arr[j+1]=*(arr+j);
			}
			else
			{
				break;
			}
		}
		arr[j+1]=temp;
	}
	printf("After sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(arr+i));
	}
	free(arr);
	return(0);
}
